#include <stdio.h>
#include <stdlib.h>

// Define the binary tree node structure
struct node {
    int data;
    struct node* left;
    struct node* right;
};

// Function to create a new node
struct node* createNode(int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a value into the binary tree
struct node* insert(struct node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// Function to delete a node from the binary tree
struct node* deleteNode(struct node* root, int value) {
    if (root == NULL) {
        return root;
    }

    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    } else {
        // Node to be deleted found
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }

        // Node has two children, find the node with the minimum value in the right subtree
        struct node* temp = root->right;
        while (temp->left != NULL) {
            temp = temp->left;
        }

        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}



// In-order traversal (for testing)
void inOrderTraversal(struct node* root) {
    if (root == NULL) {
        return;
    }
    inOrderTraversal(root->left);
    printf("%d ", root->data);
    inOrderTraversal(root->right);
}

void postOrderTraversal(struct node* root){
    if(root == NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    printf("%d ",root->data);
}

int main() {
    struct node* root = NULL;

    // Insert values into the binary tree
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 11);
    root = insert(root, 9);

    // Print the tree (in-order traversal)
    printf("In-order traversal: ");
    inOrderTraversal(root);
    printf("\n");


    deleteNode(root, 9);

    printf("In-order traversal: after deletion  of 9\n");
    inOrderTraversal(root);
    printf("\n");

    // Clean up (free memory)
    // (You should implement a proper cleanup function for a real application)

    return 0;
}
