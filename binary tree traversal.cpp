#include <stdio.h>
#include <stdlib.h>
struct TreeNode
 {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* createNode(int value) 
{
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct TreeNode* insertNode(struct TreeNode* root, int value)
 {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else if (value > root->data) {
        root->right = insertNode(root->right, value);
    }

    return root;
}

void inOrderTraversal(struct TreeNode* root) 
{
    if (root != NULL)
	 {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

int main() 
{
    struct TreeNode* root = NULL;

    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    printf("In-order traversal of the binary tree: ");
    inOrderTraversal(root);
    printf("\n");

    return 0;
}

