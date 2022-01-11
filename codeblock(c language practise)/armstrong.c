#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,temp,sum=0,rem=0,cube;
printf("enter the number=");
scanf("%d",&n);
temp=n;
while(n>0)
{
rem=n%10;
cube=pow(rem,3);
sum=sum+cube;
n=n/10;
}
if(temp==sum)
{
printf("%d is armstrong",sum);
}
else
{
printf("%d is not armstrong",sum);
}
getch();
}
