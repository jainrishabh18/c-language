#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem=0,rev=0,temp;
printf("enter the number=");
scanf("%d",&n);
temp=n;
while(n>0)
{
rev=rev*10;
rem=n%10;
rev=rev+rem;
n=n/10;
}
if(temp==rev)
{
printf("%d is palindrome",temp);
}
else
{
printf("%d is not palindrome",temp);
}
getch();
}
