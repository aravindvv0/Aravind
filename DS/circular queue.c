#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int A[MAX];
int front=-1;
int rear=-1;

void display( );
void insert(int item);
int del();
void search();
int isEmpty();
int isFull();

int main()
{
        int choice,item;
        while(1)
        {
                printf("\n1.Insert\n");
                printf("2.Delete\n");
                printf("3.Search\n");
                printf("4.Display\n");
                printf("5.Quit\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);

                switch(choice)
                {
                case 1 :
                        printf("\nInput the element for insertion : ");
                        scanf("%d",&item);
                        insert(item);
                        break;
                case 2 :
                        printf("\nElement deleted is : %d\n",del());
                        break;
                case 3:
                       search();
                        break;
                case 4:
                        display();
                        break;
                case 5:
                        exit(1);
                default:
                        printf("\nWrong choice\n");
                }
        }

        return 0;

}

void insert(int item)
{
        if( isFull() )
        {
                printf("\nQueue Overflow\n");
                return;
        }
        if(front == -1 )
                front=0;

        if(rear==MAX-1)
                rear=0;
        else
                rear=rear+1;
        A[rear]=item ;
}

int del()
{
        int item;
        if( isEmpty() )
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }
        item=A[front];
        if(front==rear)
        {
                front=-1;
                rear=-1;
        }
        else if(front==MAX-1)
                front=0;
        else
                front=front+1;
        return item;
}




int isEmpty()
{
        if(front==-1)
                return 1;
        else
                return 0;
}

int isFull()
{
        if((front==0 && rear==MAX-1) || (front==rear+1))
                return 1;
        else
                return 0;
}



void display()
{
        int i;
        if(isEmpty())
        {
                printf("\nQueue is empty\n");
                return;
        }
        printf("\nQueue elements :\n");
        i=front;
        if( front<=rear )
        {
                while(i<=rear)
                        printf("%d ",A[i++]);
        }
        else
        {
                while(i<=MAX-1)
                        printf("%d ",A[i++]);
                i=0;
                while(i<=rear)
                        printf("%d ",A[i++]);
        }
        printf("\n");
}
void search(){
int key,flag=0,i;
printf("\nEnter the key element to search\n");
scanf("%d",&key);
if( isEmpty() )
        {
                printf("\nQueue Empty\n");
        }
else{

    if(A[front]==key){
             printf("\n Element found at location %d \n",front+1);
        flag=1;
    }
    else{
        for(i=front;i<=rear;i++){
            if(A[front]==key){
                printf("\n Element found at location %d \n",i+1);
                flag=1;
            }
        }
    }
}
if(flag==0){
    printf("\nElement not found in the queue\n");
}
}
