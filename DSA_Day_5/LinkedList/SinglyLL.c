#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void printLL(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insert(struct Node *head, int data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

// void insertatmiddle(struct Node *prev_node, int data)
// {
//     if (prev_node == NULL)
//     {
//         printf("The given previous node cannot be NULL");
//         return;
//     }
//     struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
//     new_node->data = data;
//     new_node->next = prev_node->next;
//     prev_node->next = new_node;
// }

void insertatmiddle(struct Node *head, int data)
{
    struct Node *temp = head;
    if (head == NULL)
    {
        printf("The given previous node cannot be NULL");
        return;
    }
    while (temp->next == NULL)
    {
        head = head->next;
        temp = temp->next->next;
    }
    head = head->next;
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = head->next;
    // new_node->next = head->next;
    head->next = new_node;
}

void insertAtPosition(struct Node** head, int data, int position) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        // If the list is empty, insert at the beginning
        *head = newNode;
        return;
    }
    if (position == 0) {
        // Insert at the beginning
        newNode->next = *head;
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    int count = 0;
    while (temp != NULL && count < position - 1) {
        temp = temp->next;
        count++;
    }
    if (temp == NULL) {
        printf("Invalid position\n");
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}


int main()
{
    struct Node *head;
    struct Node *first = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    struct Node *fourth = NULL;

    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head = first;
    head->data = 2;
    head->next = second;
    second->data = 4;
    second->next = third;
    third->data = 6;
    third->next = fourth;
    fourth->data = 8;
    fourth->next = NULL;

    printLL(head);


    insertatmiddle(head, 10);
    printf("\nafter adding in middle\n");
    printLL(head);
    insertAtPosition(&head, 111, 4);
    printf("\nafter adding at specific position\n");
    printLL(head);
}

// struct use like thar => struct Node{
// int data;
// struct Node* next;
//};
// malloc use like that => maloc(sizeof(Struct Node ));
// free
//