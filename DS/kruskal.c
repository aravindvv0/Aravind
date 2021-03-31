#include<stdio.h>
  #include<stdlib.h>

  int p[10], c[10][10];

  int search(int);

  int u(int, int);


  int main()

  {
          int i, j, n, count = 1, x, y, a, b, minimum, minc=0;

          printf("Kruskals algorithm \n");

          printf("enter size of adjency matrix:\t");

          scanf("%d",&n);

          printf("\n enter the elements of matrix \n");

          for(i=1;i<=n;i++)

          {
                  for(j=1;j<=n;j++)

                  {
                          scanf("%d",&c[i][j]);

                          if(c[i][j] == 0)

                          {
                                  c[i][j] = 9999;
                          }
                  }
          }


          while(count<n)

          {
                  minimum = 99;
                  for(i=1;i<=n;i++)
                  {

                          for(j=1;j<=n;j++)
                          {
                                  if(c[i][j] < minimum)
                                  {
                                          minimum = c[i][j];

                                          a = x = i;

                                          b = y = j;
                                  }
                          }
                  }

                  x = search(x);

                  y = search(y);

                  if(u(x, y))

                  {
                          printf("\n%d edge(%d, %d) = %d",count++, a, b, minimum);

                          minc = minc + minimum;
                  }

                  c[a][b] = c[b][a] = 9999;

         }

        printf("\ntotal cost = %d",minc);

        return 0;

}

int search(int i)

{
      while(p[i])
      {
            i = p[i];
      }

      return i;
}

int u(int i, int j)

{
      if(i != j)
      {
            p[j] = i;

            return 1;
      }

      return 0;
}
