#include <stdio.h>
void main()
{
  int r,c,a[100][100],b[100][100],m[100][100],i,j,k;
  printf("Enter the number of rows : ");
  scanf("%d",&r);
  printf("Enter the number of columns : ");
  scanf("%d",&c);
  printf("\nEnter elements of the 1st matrix (row wise) :\n");
  for(i=0;i<r;++i) for(j=0;j<c;++j) scanf("%d",&a[i][j]);
	printf("Enter elements of the 2nd matrix (row wise) :\n");
  for(i=0;i<r;++i) for(j=0;j<c;++j) scanf("%d", &b[i][j]);
  printf("\nSum of the two matrices :\n");
  for(i=0;i<r;++i) for(j=0;j<c;++j)
  {
  	m[i][j]=0;
  	for(k=0;k<c;k++) m[i][j]+=a[i][j]*b[i][j];
  }
  for (i=0;i<r;++i) for (j=0;j<c;++j)
  {
  printf("%d  ",m[i][j]);
  if (j==c-1)
  printf("\n");
  }
  getch();
}