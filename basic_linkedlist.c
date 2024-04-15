#include <stdio.h>
#include <stdlib.h>

struct node {
    int numb; 
    struct node *next;
};
typedef struct node  node_t;

void print_linkedlist(node_t *head){ //Print out the value of node 
    node_t *temp= head; // create temporary data type struct 
    while (temp!= NULL){ //Determine when the node end 
        printf("%d -", temp->numb); // Print the value of node based on what is link from head 
        temp = temp->next;
    }
    printf("\n");
}
node_t *create_value(int value){ //Create new value for the node 
    node_t *result = malloc(sizeof(node_t)); //Adding size for the node 
    result->numb = value; //adding value of the node into struct datatype called result 
    result->next = NULL; // determine the next address 
    // Ending the next address
    return result;// Return the node 

}
int main(){
    node_t n1;// Create data type struct into n1, n2, n3, n5 
    node_t n3;
    node_t n2, n5;
    node_t *head; 
    node_t *temper;
    node_t *temper_2;
    node_t *temper_3;
    node_t n4;
    n4.numb=110;
    n1.numb= 10;
    //temper= create_value(100, &n4);// Insert new node behind the address of another node 
    //n5.numb =100;//Adding value into n1, n2, n3, n5
    
    //n2.numb=19;
    //n3.numb=22;
    //head= temper;// Link data to head ==>from n1 to n3 to n5 and finally n2
    temper_2=create_value(11);
    temper= create_value(244);
    temper_2->next=temper;
    head= temper_2;
    
    /*for(int i=0; i<300; i++){
        temper_3=create_value(i,&n1);
        head=temper_3;
        print_linkedlist(head);*/
    
    //n1.next= &n3;
    //n3.next= &n5;
    //n5.next=&n2;
    //n2.next= temper;// Ending with NULL to determine where the linked list ended 
    print_linkedlist(head);
}