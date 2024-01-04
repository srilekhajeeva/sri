#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int key;
    struct Node* left;
    struct Node* right;
    int height;
};

int height(struct Node* node)
 {
    if (node == NULL)
        return 0;
    return node->height;
}
void updateHeight(struct Node* node) 
{
    if (node != NULL)
        node->height = 1 + (height(node->left) > height(node->right) ? height(node->left) : height(node->right));
}
struct Node* rightRotate(struct Node* y)
 {
    struct Node* x = y->left;
    struct Node* T2 = x->right;
    x->right = y;
    y->left = T2;
    updateHeight(y);
    updateHeight(x);
    return x;
}
struct Node* leftRotate(struct Node* x) 
{
    struct Node* y = x->right;
    struct Node* T2 = y->left;
    y->left = x;
    x->right = T2;
    updateHeight(x);
    updateHeight(y);

    return y;
}
int getBalance(struct Node* node)
 {
    if (node == NULL)
        return 0;
    return height(node->left) - height(node->right);
}

struct Node* insert(struct Node* node, int key)
 {
    if (node == NULL)
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else
        return node;
    updateHeight(node);

    int balance = getBalance(node);

    if (balance > 1) 
	{
        if (key < node->left->key)
            return rightRotate(node);
        else if (key > node->left->key)
		 {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }
    }

    if (balance < -1)
	 {
        if (key > node->right->key)
            return leftRotate(node);
        else if (key < node->right->key)
		 {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }
    }

    return node;
}

void insertKey(struct Node** root, int key) 
{
    *root = insert(*root, key);
}
struct Node* newNode(int key) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}
void inorderTraversal(struct Node* root) 
{
    if (root != NULL) 
	{
        inorderTraversal(root->left);
        printf("%d ", root->key);
        inorderTraversal(root->right);
    }
}
int main()
 {
    struct Node* root = NULL;
    int keys[] = {9, 5, 10, 0, 6, 11, -1, 1, 2};
    int n = sizeof(keys) / sizeof(keys[0]);
     for (int i = 0; i < n; i++)
    insertKey(&root, keys[i]);
    printf("In-order traversal of the AVL tree: ");
    inorderTraversal(root);
    return 0;
}
  
