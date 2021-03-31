#include <stdio.h>
int main()
{
    int arr1[20], arr2[20], array3[50];
    int n1,n2,n3,i,j,k;
    printf("Enter the size of first array : ");
    scanf("%d", &n1);
    printf("Enter elements in first array : ");
    for(i=0; i<n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter the size of second array : ");
    scanf("%d", &n2);
    printf("Enter elements in second array : ");
    for(i=0; i<n2; i++){
      scanf("%d", &arr2[i]);
    }
    n3 = n1 + n2;
    i = 0;
    j = 0;



    for(k=0; k <n3; k++){

        if(i >= n1 || j >= n2){
            break;
        }


        if(arr1[i] < arr2[j]){
            array3[k] = arr1[i];
            i++;
        }
        else
        {
            array3[k] = arr2[j];
            j++;
        }
    }
while(i < n1){
        array3[k] = arr1[i];
        k++; i++;
    }
while(j < n2){
        array3[k] = arr2[j];
        k++; j++;
    }

    printf("\n Merged Array is : ");
    for(i=0; i<n3; i++){
        printf("%d\t", array3[i]);
    }


}
