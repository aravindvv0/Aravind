#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node*top=NULL;

void push() {
    int num;
    printf("\nEnter the element to push..  ");
    scanf("%d",&num);
    struct node *temp;
    temp =(struct node *)malloc(1*sizeof(struct node));
    temp->data = num;

    if (top == NULL) {
        top = temp;
        top->next = NULL;
    } else {
        temp->next = top;
        top = temp;
    }
}


void pop() {
    struct node *temp;
    if (top==NULL) {
        printf("\nStack is Empty\n");
        return;
    } else {
        temp = top;
        top = top->next;
        printf("Removed  Element : %d\n", temp->data);
        free(temp);
    }
}


void display() {
    struct node *temp;
    temp=top;
    if(temp==NULL){
        printf("\nEmpty Stack\n");
    }
    else{
    printf("\n Elements are :\n");
  while (temp != NULL) {
     printf(" %d, ", temp->data);
     temp = temp->next;
  }}
  printf("\n");
}
void search(){

int i=0,key,flag=0;
printf("\nEnter key value to search\n");
scanf("%d",&key);
struct node*temp;
temp=top;
if(temp==NULL){
    printf("Empty");
}
else{

    while(temp!=NULL){
            i++;
        if(temp->data==key){
            printf("\nElement found at location %d",i);
            flag=1;

        }
        temp=temp->next;
    }
    if(flag==0){
        printf("\nElement not found in stack\n");
    }
}
}

void main() {

  printf("\nStack operation using linked list\n");
  int choice;
  printf("\n1.Push\n");
                printf("2.Pope\n");
                printf("3.Display\n");
                printf("4.Search\n");
                printf("5.Quit\n");


  while(1){

    printf("\nEnter a choice\n");
    scanf("%d",&choice);
    switch(choice){


    case 1:{push();break;}
    case 2:{pop();break;}
    case 3:{display();break;}
    case 4:{search();break;}
    case 5:{exit(1);}
    default:
                printf("\nWrong choice\n");
    }
  }

}
