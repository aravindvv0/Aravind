#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
//Disjoint Sets in Linked List

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *head = NULL;
struct node *head2 = NULL;


struct node *unionset(){

 if(head==NULL)
{
    return NULL;
}
 if(head2==NULL)
{
    return NULL;
}

struct node *temp;
struct node *temp2;

temp2=head2;
temp = head;

while(temp->right!=NULL){
   temp = temp->right;
}
temp->right = head2;



   do{

        temp2->left == head;


        temp2 = temp2->right;


    }while(temp2->right!= NULL);

    head2 = NULL;
return(head);


}


struct node *makeset(int data)
{
    struct node *node = (struct node*) malloc(sizeof(struct node));
    struct node *temp;
    if(head == NULL){
   node->data = data;

   node->right = NULL;
   node->left = NULL;
   head=node;
}
   else{
    temp=head;
    while(temp->right!=NULL){
    temp=temp->right;
                         }
    if(temp->right==NULL){
    node->left = head;
    temp->right = node;
    node->right = NULL;
    node->data = data;
    }



   }

    return(node);
}
struct node *makeset2(int data)
{
    struct node *node = (struct node*) malloc(sizeof(struct node));
    struct node *temp;
    if(head2 == NULL){
   node->data = data;

   node->right = NULL;
   node->left = NULL;
   head2=node;
}
   else{
    temp=head2;
    while(temp->right!=NULL){
    temp=temp->right;
                         }
    if(temp->right==NULL){
    node->left = head2;
    temp->right = node;
    node->right = NULL;
    node->data = data;
    }



   }

    return(node);
}




void display(struct node *Node){
struct node *temp;
temp=Node;
if(temp==NULL)
{
    printf("Set is Empty");
}
else{
    printf("\n");
    printf("Elements of Set are: \n");
    printf("\n");
    do {
            printf("%d\n",temp->data);
            temp=temp->right;
    }while(temp!=NULL);
}
printf("\n");
}


int find(int a, struct node *Node){

    struct node *temp;
    if(Node==NULL){

        return 1;
    }
    else{
        temp=Node;
            while(temp->data!=a && temp->right!=NULL){
            temp=temp->right;

        }
        if(temp->data==a){

            return 0;

        }
        else{

            return 1;
        }



    }
    printf("\n");

}


int main()
{
    int n,limit,i,key,one,two,key2,choice;
    struct node *root1;

    printf("Disjoint Sets Operations \n");
    printf("\n");
    printf("Enter a limit for Set 1 : \n");
    scanf("%d",&limit);
    printf("Enter %d set elements :\n",limit);
    for(i=1;i<=limit;i++){

    scanf("%d",&n);
    key = find(n,head);
    if(key==1){

    makeset(n);}
    else{
        printf("Element is already  present in Set 1, Enter a different number :  \n");
        i--;
    }
   }


    printf("Enter a limit for Set 2 : \n");
    scanf("%d",&limit);
    printf("Enter %d Set 2 elements : \n",limit);
    for(i=1;i<=limit;i++){

    scanf("%d",&n);
    key = find(n,head);
    if(key==1){
            key=find(n,head2);
            if(key==1){
                makeset2(n);
            }
            else{
                    printf("Element is already present in Set 2, Enter a different element :  \n");
                     i--;

            }

    }
    else{
        printf("Element is present in set 1 Enter a different element :  \n");
        i--;
    }}
    printf("\n");
    printf(" 1. Display Set 1  \n 2. Display Set 2 \n 3. Find \n 4. Union Sets \n 5. Exit \n");
    while(1){


    printf("Enter a choice \n");
    scanf("%d",&choice);
    printf("\n");
    switch(choice)
    {
     case 1:{
     display(head);

     break;
     }
      case 2:{
     display(head2);
     break;
     }



     case 3:{
      printf("Find \n");
      printf("\n");
      printf("Enter 2 elements to Find : \n");
      scanf("%d",&one);
      scanf("%d",&two);
  key = find(one,head);
    key2 = find(two,head);
    if(key==0&&key2==0){

   printf("Both Elements are in Set 1 \n");}
   else{
         key = find(one,head2);
         key2 = find(two,head2);
         if(key==0&&key2==0){

    printf("Both Elements are in Set 2 \n");}
          else{
              printf("Elements are not in same Set \n");

        }


} break;

     }
   case 4:{


        root1 = unionset();
        printf("Sets  after union : \n ");
        display(root1);


        break;
        }

     case 5: {
     exit(0);
     }


}}

  return 0;
}
