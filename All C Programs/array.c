#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k;
  printf("enter a number=");
  scanf("%d",&i);
  int num[i];
  for(j=0;j<i;j++)
   scanf("%d",&num[j]);
  for(k=0;k<i;k++)
   printf("%d\n",num[k]);
  getch();
}
