#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
void insertion();
void display();
void insertend();
void insertafterkey();
void insertbefore();
void deletekey();
void deletebeginning();
void deletend();
void search();

struct node {
   int data;
   struct node *next;
   struct node *prev;
};

struct node *head = NULL;


void main()
{
    int e,d;
    printf("Doubly Linked List\n");
    printf("\n 1. Insertion \n 2. Insertion end\n 3. Display\n 4. Insertion After Key\n 5. Delete Key\n 6. Delete Beginning\n 7. Delete End\n 8. Search\n 9. Exit");

    while(e!=9){

             printf("\nEnter a choice\n");
    scanf("%d",&e);
    switch(e)
    {
        case 1:{
        insertion();
        break;
        }
        case 2:{
        insertend();
        break;
        }
        case 3:{
        display();
        break;
        }
        case 4:{
        insertafterkey();
        break;
        }
        case 5:{
        deletekey();
        break;
        }
         case 6:{
        deletebeginning();
        break;
        }
        case 7:{
        deletend();
        break;
        }
        case 8:{
        search();
        break;
        }
        case 9:
            {
        break;
            }
            case 10:
            {
                insertbefore();
        break;
            }
            default:printf("Invalid");
    }


                }

}
void insertion(){

struct node *newnode = (struct node*) malloc(sizeof(struct node));
int p;
struct node *temp;

printf("Enter element to insert\n");
scanf("%d",&p);
temp=head;
if(head == NULL){
   newnode->data = p;

   newnode->next = NULL;
   newnode->prev = NULL;
   head=newnode;
}
else
    if(temp->prev == NULL){
    newnode->data = p;
    newnode->next = temp;
    temp->prev = newnode;
    newnode->prev = NULL;
    head=newnode;
    printf("Inserted"); }
}
void display(){
struct node *temp;
temp=head;
if(temp==NULL)
{
    printf(" empty");
}
else{
    printf("Elements are: \n");
    do {
            printf("%d\n",temp->data);
            temp=temp->next;
    }while(temp!=NULL);
}
}
void insertend(){

struct node *newnode = (struct node*) malloc(sizeof(struct node));
int q;
struct node *temp;

printf("Enter element to insert\n");
scanf("%d",&q);
temp=head;
newnode->data = q;
if(head == NULL){


   newnode->next = NULL;
   newnode->prev = NULL;
   head=newnode;
}
else{
     while(temp->next!=NULL){
         temp=temp->next;
                         }
      if(temp->next==NULL){
         temp->next=newnode;
         newnode->prev=temp;
         newnode->next=NULL;

         printf("Insertion AT The End");
                           }

   }


}
void insertafterkey()
{
struct node *newnode = (struct node*) malloc(sizeof(struct node));
int q,key;
struct node *temp;

printf("Enter element to insert: \n");
scanf("%d",&q);
printf("Enter the key after which we need to insert");
scanf("%d",&key);
temp=head;
newnode->data = q;
if(head == NULL){


   printf("Key value not found. Linked list empty");
}
else{
    while(temp->data!=key && temp->next!=NULL){

        temp=temp->next;
    }
    if(temp->data==key){
            if(temp->next==NULL){
               temp->next=newnode;
               newnode->prev=temp;
               newnode->next=NULL;
               printf("Element inserted after %d",key);

            }
             else{
                newnode->prev = temp;
                newnode->next = temp->next;
                temp->next->prev = newnode;
                temp->next = newnode;
                printf("Element inserted after %d",key);}
          }
    if(temp->data!=key && temp->next==NULL){
            printf("Key element not found, Insertion Failed");
          }
}
}
void deletekey(){

struct node *temp;
int key;
if(head==NULL){

    printf("Empty List");

}
else{
        printf("Enter the data value to be deleted  .");
        scanf("%d",&key);
        temp=head;
        if(temp->next==NULL && temp->prev==NULL){
                if(temp->data==key){

            head=NULL;
            free(temp);
            printf("Element deleted %d",key);
            }
            else{printf("Element not found to be deleted");}

        }
        if(temp->prev==NULL && temp->data==key){
               head=temp->next;
               temp->next->prev=NULL;
               free(temp);
               printf("Element deleted %d",key);
        }
        while(temp->data!=key && temp->next!=NULL){
            temp=temp->next;
        }
        if(temp->data==key){
            if(temp->next==NULL){
                temp->prev->next=NULL;
                free(temp);
                printf("Element deleted %d",key);
            }
            else{
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev;
                free(temp);
                printf("Element deleted %d",key);
            }
        }
        if(temp->next==NULL && temp->data!=key){

            printf("Key element not found,, deletion not possible");
        }

}

}
void deletebeginning()
{
    struct node *temp;
    if(head==NULL){
        printf("Linked list empty, deletion not possible");
    }
    else{
            temp=head;
        if(temp->next==NULL && temp->prev==NULL)
        {
            head=NULL;
            printf("Element deleted\n %d \n",temp->data);
            free(temp);

        }
        else{
                head = temp->next;
            temp->next->prev=NULL;
            printf("Element deleted\n %d \n",temp->data);
            free(temp);

        }
    }
}
void deletend()
{
   struct node *temp;
    if(head==NULL){
        printf("Linked list empty, deletion not possible");
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        if(temp->next==NULL){
            temp->prev->next=NULL;
            printf("Element deleted\n %d \n",temp->data);
            free(temp);

        }

    }
}
void search()
{
    int key,i=0;
    struct node *temp;
    if(head==NULL){
        printf("List empty");
    }
    else{
        temp=head;
    printf("Enter the element to be searched in the list \n\n");
    scanf("%d",&key);
        while(temp->data!=key && temp->next!=NULL){
            temp=temp->next;
            i++;
        }
        if(temp->data==key){
            printf("Element found: Location = %d",i+1);
        }
        else{
            printf("Element not found in the list");
        }


    }

}
void insertbefore()
{
struct node *newnode = (struct node*) malloc(sizeof(struct node));
int q,key;
struct node *temp;

printf("Enter");
scanf("%d",&q);
printf("Enter the key before which we need to insert");
scanf("%d",&key);

if(head == NULL){


   printf("Key value not found. Linked list empty");
}
else{
    temp=head;
    newnode->data = q;
    if(temp->prev==NULL && temp->data==key){
        temp->prev = newnode;
        newnode->next=temp;
        newnode->prev=NULL;
        head = newnode;
        temp=newnode;
        printf("Element inserted before %d", key);
    }
    while(temp->data!=key && temp->next!=NULL){

        temp=temp->next;
    }
    if(temp->data==key && temp->prev!=NULL){

               newnode->next=temp;
               temp->prev->next=newnode;
               newnode->prev=temp->prev;
               temp->prev=newnode;

               printf("Element inserted befor %d",key);}


             if(temp->next==NULL&& temp->data==key){
                  newnode->next=temp;
                  temp->prev->next=newnode;
                  newnode->prev=temp->prev;
                  temp->prev=newnode;

                printf("Element inserted before %d",key);}

    if(temp->data!=key && temp->next==NULL){
            printf("Key element not found, Insertion Failed");
          }
}

}
