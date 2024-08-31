#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

};

struct Node* createNode(int data){
    struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void inOrderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    inOrderTraversal(root->left);
    printf("%d ", root->data);
    inOrderTraversal(root->right);
}
void PreOrderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    inOrderTraversal(root->left);
    inOrderTraversal(root->right);
}
void PostOrderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    inOrderTraversal(root->left);
    inOrderTraversal(root->right);
    printf("%d ", root->data);
}


int main(){
    struct Node* root = createNode(1);
    root->left=createNode(2);
    root->right=createNode(3);
    root->left->left=createNode(4);
    root->left->right=createNode(5);
    root->right->right=createNode(6);
    root->left->left->left=createNode(7);
    root->left->right->left=createNode(8);
    root->right->right->left=createNode(9);
    printf("Inorder traversal: ");
    inOrderTraversal(root);
    printf("\n");
    printf("Preorder traversal: ");
    PreOrderTraversal(root);
    printf("\n");
    printf("Postorder traversal: ");
    PostOrderTraversal(root);
    printf("\n");


    return 0;

}
