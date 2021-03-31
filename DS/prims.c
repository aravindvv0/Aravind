#include<stdio.h>
#include<stdbool.h>
#define V 5



void main()
{
   int G[V][V] = {
  {0, 5, 10, 8, 0},
  {5, 0, 1, 6, 7},
  {10, 1, 0, 0, 9},
  {8, 6, 0, 0, 2},
  {0, 7, 9, 2, 0}
  };

int infinite=10000,edges=0,x,y,j,min;
bool v[V];
for(int i=0;i<V;i++)
         v[i] = false;

v[0] = true;
printf("Prims algorithm\n");
printf("Minimum cost spanning tree is : \n");
while(edges!=V-1){
min=infinite;
x=0;
y=0;

  for(int i=0;i<V;i++){
    if(v[i]){
       for(j=0;j<V;j++){
       if (!v[j] && G[i][j]) {

       if(min>G[i][j]){
        min=G[i][j];
        y=j;
        x=i;

       }

      } }}}

      printf("%d - %d \n",x,y);
    v[y]=true;

      edges++;

}

}
