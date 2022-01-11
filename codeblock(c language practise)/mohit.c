#include<stdio.h>
#include<conio.h>
int clrscr(int x,int y)
{
    int z=x+y;
    return z;
}
void main()
{
  int a,b,c,d,e,f;
  printf("Enter two numbers=");
  scanf("%d%d",&a,&b);
  c=clrscr(a,b);
  printf("Addition=%d",c);
  printf("Enter two numbers=");
  scanf("%d%d",&d,&e);
  f=clrscr(d,e);
  printf("Addition=%d",f);
  getch();
}
