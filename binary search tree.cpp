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
    if (root == NULL) 
	{
        return createNode(value);
    }
    if (value < root->data)
	{
        root->left = insertNode(root->left, value);
    }
	 else if (value > root->data) 
	{
        root->right = insertNode(root->right, value);
    }

    return root;
}
void inOrderTraversal(struct TreeNode* root) 
{
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

struct TreeNode* search(struct TreeNode* root, int key) 
{
    if (root == NULL || root->data == key) {
        return root;
    }
    if (key < root->data) 
	{
        return search(root->left, key);
    } 
	else
	 {
        return search(root->right, key);
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
    printf("In-order traversal of the binary search tree: ");
    inOrderTraversal(root);
    printf("\n");
    int keyToSearch = 60;
    struct TreeNode* result = search(root, keyToSearch);
    if (result != NULL) 
	{
        printf("Key %d found in the binary search tree.\n", keyToSearch);
    } 
	else 
	{
        printf("Key %d not found in the binary search tree.\n", keyToSearch);
    }

    return 0;
}

