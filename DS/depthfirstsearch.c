#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct vertex {
   char label;
   bool visited;
};


int stack[10];
int top = -1;


struct vertex* vertexlist[10];
int v=0,i;


void addvertex(char label) {

   struct vertex* vertex = (struct vertex*)malloc(sizeof(struct vertex));
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

for(i=0;i<v; i++) {
   if(adjmatrix[a][i] == 1 && vertexlist[i]->visited == false) {
   return i;}
   }
   return -1;
}


void display(int a) {
   printf("%c ",vertexlist[a]->label);

}


void depthfirstsearch() {

vertexlist[0]->visited = true;
display(0);
stack[++top]=0;

while(top!=-1) {

int unvertex = newvertex(stack[top]);

 if(unvertex == -1) {
    stack[top--];}
 else {
    vertexlist[unvertex]->visited = true;
    display(unvertex);
    stack[++top] = unvertex;
      }
   }

}

void main() {
   addvertex('S');
   addvertex('A');
   addvertex('B');
   addvertex('C');
   addedge(0, 1);
   addedge(0, 2);
   addedge(1, 2);
   addedge(2, 2);
   addedge(1, 3);
   addedge(3, 2);
   addedge(3, 3);
   printf("Depth First Search: ");
   depthfirstsearch();
}

