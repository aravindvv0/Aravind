#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 20

struct vertex {
   char label;
   bool visited;
};

int queue[MAX];
int front = -1;
int rear = -1;


int v;
struct vertex* vertexlist[MAX];

void addvertex(char label) {
   struct vertex* vertex = (struct vertex*) malloc(sizeof(struct vertex));
   vertex->label = label;
   vertex->visited = false;
   vertexlist[v++] = vertex;
}


int adjmatrix[MAX][MAX];

void addedges(int start, int end)
{
      int i, edges;
      edges = v * (v - 1);
      for(i=1; i<= edges; i++)
      {
        adjmatrix[start][end] = 1;
      }
}


void add(int vertex){

  if(rear == MAX - 1){

     printf("Queue Full");}

  else{

    if(front == -1){

      front = 0;
    }

  rear = rear + 1;
  queue[rear] = vertex ;
}}



int del(){

int i;
if(front == -1 || front > rear)
    {
    printf("Empty queue");
    exit(1);}
else
    {
    i = queue[front];
    front = front + 1;
    return i;
            }
}


int degree(int vertex)
{
    int i,indegree = 0;
    for(i=0; i<v; i++)
        {
            if(adjmatrix[i][vertex] == 1)
            {
                  indegree++;
            }
      }
      return indegree;
}



void main(){

int i, vertex, top[MAX], indegree[MAX];

      addvertex('A');
      addvertex('B');
      addvertex('C');
      addvertex('D');
      addvertex('E');
      addedges(0, 1);
      addedges(0, 3);
      addedges(0, 4);
      addedges(1, 3);
      addedges(2, 0);
      addedges(2, 1);
      addedges(2, 3);
      addedges(2, 4);
      addedges(3, 4);

for(i = 0; i < v; i++){

    indegree[i] = degree(i);
    if(indegree[i] == 0){
        add(i);
}
                      }

int count = 0;
while((front != -1 || front < rear) && count < v)
{
    vertex = del();
    top[++count] = vertex;
    for(i = 0; i < v; i++){

        if(adjmatrix[vertex][i] == 1){
            adjmatrix[vertex][i] = 0;
            indegree[i] = indegree[i] - 1;
            if(indegree[i] == 0){
                add(i);          }
                                     }
                          }
}

if(count < v){

    printf("Graph is Cyclic \n");
    exit(1);}

    printf("Topological Order of Vertices :   \n");
    for(i = 1; i <= count; i++){

        printf("%c ", vertexlist[top[i]]->label);
        }

}











