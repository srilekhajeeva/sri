#include <stdio.h>
#include <stdlib.h>
struct Node
 {
    int data;
    struct Node* next;
};
void deleteAtBegin(struct Node** head)
 {
    if (*head == NULL) {
        printf("List is empty. Cannot delete from an empty list.\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
    printf("Node deleted from the beginning of the list.\n");
}
void displayList(struct Node* head) 
{
    printf("Linked List: ");
    while (head != NULL)
	 {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
int main() 
{
    struct Node* head = NULL;
    for (int i = 5; i >= 1; i--) 
	{
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = i;
        newNode->next = head;
        head = newNode;
    }
    displayList(head);
    deleteAtBegin(&head);
    displayList(head);
    return 0;
}

