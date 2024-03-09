#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int x;
    struct Node *next;
}Node ; 

void inser_End(Node **head, int value){

    Node *new_node = malloc(sizeof(Node));
    if (new_node==NULL){
        exit(1);
    }
    new_node->next=NULL;
    new_node->x=value;
    Node *curr = *head;
    while (curr->next!= NULL){
        printf("The values are %d\n", curr->x);
        curr=curr->next;
    }
    curr->next=new_node;
}

int main(){
    Node* head = malloc(sizeof(Node));
    head->x=15;
    head->next = NULL;//malloc(sizeof(Node));
    if (head ==NULL){
        exit(2);
    }

    inser_End(&head, -3);

    inser_End(&head, -4);

    inser_End(&head, -1);
    //head.next->x=30;
    //head.next->next=malloc(sizeof(Node));
    //head.next->next->x=300;
    //head.next->next->next=NULL;
    

    //Node *curr = &head;

    //while (curr != NULL){
        //printf("The values are %d\n", curr->x);
        //curr=curr->next;
    //}
    //free(head.next->next);
    //free(head.next);
   for (Node *curr = head; curr != NULL; curr= curr->next){
        printf("The values are %d\n", curr->x);
    }
}