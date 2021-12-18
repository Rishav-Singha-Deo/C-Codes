#include <stdio.h>
 
void main()
{
  int r,c,p,q,i,j,k,sum=0;
  int f[10][10], s[10][10], ml[10][10];
 
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &r, &c);
  printf("Enter elements of first matrix\n");
 
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++)
      scanf("%d", &f[i][j]);
 
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if (c != p)
    printf("The multiplication isn't possible.\n");
  else
  {
    printf("Enter elements of second matrix\n");
 
    for (i = 0; i < p; i++)
      for (j = 0; j < q; j++)
        scanf("%d", &s[i][j]);
 
    for (i = 0; i < r; i++)
    {
      for (j = 0; j < q; j++)
      {
        for (k = 0; k < p; k++)
        {
          sum = sum + f[i][k]*s[k][j];
        }
 
        ml[i][j] = sum;
        sum = 0;
      }
    }
    printf("Product of the matrices:\n");
    for (i = 0; i < r; i++) {
      for (j = 0; j < q; j++)
        printf("%d\t", ml[i][j]);
 
      printf("\n");
    }
  }
  getch();
}
