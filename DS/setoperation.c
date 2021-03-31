#include <stdio.h>
void bitunion();
void intersection();
void difference();
int i,j,A[20],B[20],C[20],D[20],E[20],n,m;
void main()
{
    int  d=0;

    printf("Enter the size of the first set \n");
    scanf("%d", &n);
    printf("Enter the set elements in binary \n");

     for(i=0;i<n;i++)
    {
       scanf("%d",&A[i]);
    }
    printf("First bit set is:\n");
    for(i=0;i<n;i++)
    {
       printf("%d",A[i]);
    }
    printf("\n");
    printf("Enter the size of the second bit set \n");
    scanf("%d", &m);
    printf("Enter the set elements in binary \n");

     for(i=0;i<m;i++)
    {
       scanf("%d",&B[i]);
    }
    printf("Second set is:\n");
    for(i=0;i<m;i++)
    {
       printf("%d",B[i]);
    }

    printf("\n");

if(m!=n){

        printf("Incompactable for operation...set length is different");
        exit(0);
    }


    while(d!=5){



        printf("Choose \n 1. Union of sets\n 2. Intersection of sets\n 3. Difference of set A From B\n 5. Exit\n");
        scanf("%d",&d);
        switch(d){

    case 1: bitunion();
            break;
    case 2: intersection();
            break;
    case 3: difference();
            break;
    case 5: exit(0);
    default: printf("Invalid choice");




        }}}

    void bitunion(){

    for(i=0;i<n;i++){
        C[i] = A[i] || B[i];}
         printf("Union of the sets is :\n");
        for (i=0;i<n;i++){
    printf("%d", C[i]);}
    printf("\n");

    }
   void intersection(){
     for(i=0;i<n;i++){
        D[i] = A[i] && B[i];}
        printf("Intersection of the sets is:\n");
        for (i=0;i<n;i++){
    printf(" %d", D[i]);}printf("\n");

    }

   void difference(){


    for(i=0;i<n;i++){
        E[i] = A[i] &&!B[i];}
         printf("Difference of the sets is:\n");
         for (i=0;i<n;i++){
    printf("%d", E[i]);}printf("\n");


    }









