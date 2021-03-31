#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct bst *Insertion(struct bst *node,int data);
struct bst *Search(struct bst *node,int data);
void Inorder(struct bst *node);
struct bst* Left(struct bst *node);
struct bst * Delete(struct bst *node, int data);
struct bst
{
    int data;
    struct bst *left;
    struct bst *right;
};
struct bst *root = NULL;


void main(){
int d=0,n,del,key;
struct bst *search;
while(d!=5){
    printf("\n1.Insertion 2.Deletion 3.Inorder 4.Search  5.Exit\n");
    printf("Choose an option:");
    scanf("%d",&d);
    switch(d)
    {
    case 1:
        printf("\nEnter element to be inserted:");
        scanf("%d", &n);
        root = Insertion(root, n);

        printf("\nElements are:");
        Inorder(root);
        break;
    case 2:
        printf("\nEnter element to be deleted :");
        scanf("%d", &del);
        root = Delete(root,del);
        printf("\nElements in are: ");
        Inorder(root);
        break;
    case 3:
        printf("\n Inorder Travesals : ");
        Inorder(root);
        break;

    case 4:
        printf("\nEnter element to be searched:");
        scanf("%d", &key);
        search = Search(root,key);
        if(search==NULL){
        printf("Element is not found ");}
        else{
            printf("Element is found %d ",search->data);}
            break;
    case 5:
        exit(0);
        break;
    default:printf(" Invalid Choice:");
        break;
        }
    }

}

struct bst *Insertion(struct bst *node,int data){

    if(node==NULL){
        struct bst *newnode;
        newnode = (struct bst*) malloc(sizeof(struct bst));

        newnode -> data = data;
        newnode -> left = newnode -> right = NULL;
        return newnode;}
    if(data >(node->data)){
        node->right = Insertion(node->right,data);
    }
    else if(data < (node->data)){
        node->left = Insertion(node->left,data);
    }

    return node;
}
struct bst * Search(struct bst *node, int data){

    if(node==NULL){

        return NULL;}
    if(data > node->data){

        return Search(node->right,data);
    }
    else if(data < node->data){

        return Search(node->left,data);
    }
    else{

        return node;
    }
}
void Inorder(struct bst *node){

    if(node==NULL){
        return;
    }
    Inorder(node->left);
    printf("%d", node->data);
    Inorder(node->right);
}
struct bst* Left(struct bst *node){

    if(node==NULL){

        return NULL;
    }
    if(node->left)
        return Left(node->left);
    else
        return node;
}


struct bst * Delete(struct bst *node, int data){

    struct bst *temp;
    if(node==NULL){
        printf("Element Not Found");}
    else if(data < node->data){
        node->left = Delete(node->left, data);}
    else if(data > node->data){
        node->right = Delete(node->right, data);
    }
    else{

        if(node->right && node->left){

            temp = Left(node->right);
            node -> data = temp->data;

            node -> right = Delete(node->right,temp->data);
        }
        else{

            temp = node;
            if(node->left == NULL)
                node = node->right;
            else if(node->right == NULL)
                node = node->left;
            free(temp);
        }
    }
    return node;
}
