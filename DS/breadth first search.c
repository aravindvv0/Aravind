#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct vertex {
   char label;
   bool visited;
};

int queue[10];
int rear = -1;
int front = 0;
int count = 0;

void insert(int data) {
   queue[++rear] = data;
   count++;
}

int del() {
   count--;
   front = front+1;
   return queue[front];
}


int i,v= 0;
struct vertex* vertexlist[10];

void addvertex(char label) {
   struct vertex* vertex = (struct vertex*) malloc(sizeof(struct vertex));
   vertex->label = label;
   vertex->visited = false;
   vertexlist[v++] = vertex;

}

int adjmatrix[10][10];

void addedge(int start,int end) {
   adjmatrix[start][end] = 1;
   adjmatrix[end][start] = 1;

}


int newvertex(int a) {

for(i=0;i<v;i++) {
    if(adjmatrix[a][i] == 1 && vertexlist[i]->visited == false)
    return i;
   }
   return -1;
}


void display(int v) {
   printf("%c ",vertexlist[v]->label);
}


void breadthfirstsearch() {

vertexlist[0]->visited = true;
display(0);
insert(0);
int unvertex;

while(count!=0) {
  int temp = del();
      while((unvertex = newvertex(temp)) != -1) {
         vertexlist[unvertex]->visited = true;
         display(unvertex);
         insert(unvertex);
      }

   }
}

void main() {
   addvertex('S');
   addvertex('A');
   addvertex('B');
   addvertex('C');
   addvertex('D');
   addvertex('E');
   addedge(0, 1);
   addedge(0, 2);
   addedge(0, 3);
   addedge(1, 4);
   addedge(2, 4);
   addedge(3, 4);

   printf("Breadth First Search: ");

   breadthfirstsearch();

}
