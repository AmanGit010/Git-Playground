#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	int priority; 
	struct Node* next;
};
Node* create(int data, int priorityVal)
{
    Node* temp = (Node*) malloc(sizeof(Node));
    temp->data = data;
    temp->priority = priorityVal;
    temp->next = NULL;
 
    return temp;
}
int peek(Node** head)
{
    return (*head)->data;
}

void push(Node** head, int data, int priorityVal)
{
    Node* curr = (*head);
    Node* temp = create(data, priorityVal);
    if ((*head)->priority > priorityVal) {
        temp->next = *head;
        (*head) = temp;
    }
    else {
        while (curr->next != NULL &&
            curr->next->priority < priorityVal) { curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
    }
}
void pop(Node** head)
{
    Node* temp = *head;
    (*head) = (*head)->next;
    printf("(%d, priority: %d) popped\n",temp->data,temp->priority);
    free(temp);
}
int isEmpty(Node** node)
{
    return (*node) == NULL;
}
void display(struct Node* node){
    printf("Priority Queue: ");
    while(node!=NULL)
    {
        printf("%d ",node->data);
        node = node->next;
    }
    printf("\n");
}
int main()
{
    Node* pq = create(10, 1);
	push(&pq, 30, 3);
	push(&pq, 20, 2);
	push(&pq, 40, 4);	
	display(pq);
	pop(&pq);
	pop(&pq);
	display(pq);
	push(&pq, 15, 2);
	push(&pq, 20, 2);
	push(&pq, 50, 5);
	push(&pq, 5, 1);
	display(pq);
    return 0;
}
