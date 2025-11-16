// 2.	Write a program to insert item in middle of the linked list.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
   
    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    struct node *middle = (struct node*)malloc(sizeof(struct node));
    middle->data = 15;
    middle->next = head->next;
    head->next = middle;

    struct node *temp = head;
    printf("Linked List: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    return 0;
}
