#include<stdio.h>
#include<conio.h>
void main()
{
int n,rev=0,rem;
printf("enter the number=");
scanf("%d",&n);
while(n>0)
{
rev=rev*10;
rem=n%10;
n=n/10;
rev=rev+rem;
}
printf("%d",rev);
getch();
}
