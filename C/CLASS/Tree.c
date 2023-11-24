#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

10, 15, 9, 12, 13, 79, 45, 36, 22

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* root = NULL;

struct TreeNode* createNode(int data) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    if (newNode) {
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;
    }
    return newNode;
}

void insertNode(struct TreeNode** node, int data) {
    if (*node == NULL) {
        *node = createNode(data);
    } else if (data < (*node)->data) {
        insertNode(&(*node)->left, data);
    } else {
        insertNode(&(*node)->right, data);
    }
}

void insert(int data) {
    insertNode(&root, data);
}

bool searchNode(struct TreeNode* node, int data) {
    if (node == NULL) {
        return false;
    }
    if (node->data == data) {
        return true;
    }
    if (data < node->data) {
        return searchNode(node->left, data);
    }
    return searchNode(node->right, data);
}

bool search(int data) {
    return searchNode(root, data);
}

void inorderTraversal(struct TreeNode* node) {
    if (node == NULL) {
        return;
    }
    inorderTraversal(node->left);
    printf("%d ", node->data);
    inorderTraversal(node->right);
}

void displayInorder() {
    printf("Inorder traversal of the tree: ");
    inorderTraversal(root);
    printf("\n");
}

void preorderTraversal(struct TreeNode* node) {
    if (node == NULL) {
        return;
    }
    printf("%d ", node->data);
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}

void displayPreorder() {
    printf("Preorder traversal of the tree: ");
    preorderTraversal(root);
    printf("\n");
}

void postorderTraversal(struct TreeNode* node) {
    if (node == NULL) {
        return;
    }
    postorderTraversal(node->left);
    postorderTraversal(node->right);
    printf("%d ", node->data);
}

void displayPostorder() {
    printf("Postorder traversal of the tree: ");
    postorderTraversal(root);
    printf("\n");
}

int main() {
    int choice, data;
    while (1) {
        printf("\n1. Insert\n2. Search\n3. Inorder\n4. Preorder\n5. Postorder\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &data);
                insert(data);
                break;

            case 2:
                printf("Enter the value to search: ");
                scanf("%d", &data);
                if (search(data)) {
                    printf("Value found in the tree.\n");
                } else {
                    printf("Value not found in the tree.\n");
                }
                break;

            case 3:
                displayInorder();
                break;

            case 4:
                displayPreorder();
                break;

            case 5:
                displayPostorder();
                break;

            case 6:
                printf("***EXIT***\n");
                exit(0);

            default:
                printf("Error: Invalid Choice!\n");
        }
    }

    return 0;
}
