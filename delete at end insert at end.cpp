#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
};

void deleteAtEnd(struct Node** head)
 {
    if (*head == NULL)
	 {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    if ((*head)->next == NULL) 
	{
        free(*head);
        *head = NULL;
        printf("Node deleted successfully.\n");
        return;
    }
    struct Node* secondLast = *head;
    while (secondLast->next->next != NULL) 
	{
        secondLast = secondLast->next;
    }
    free(secondLast->next);
    secondLast->next = NULL;
    printf("Node deleted successfully.\n");
}
void printList(struct Node* head) 
{
    while (head != NULL)
	 {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void insertAtEnd(struct Node** head, int data)
 {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) 
	{
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
int main()
 {
    struct Node* head = NULL;
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 4);
    printf("Original linked list: ");
    printList(head);
    deleteAtEnd(&head);
    printf("Linked list after deletion: ");
    printList(head);
    return 0;
}

