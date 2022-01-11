#include<stdio.h>
#include<conio.h>
int main()
{
    int i,sum=0,avg,n;
    printf("enter num of students=");
    scanf("%d",&n);
    int marks[n];
    printf("enter the marks ");
    for(i=1;i<n;i++)
    {
    scanf("%d",&marks[i]);
    }
    for(i=1;i<n;i++)
    sum+=marks[i];
    avg=sum/n;
    printf("average of total class=%d\n",avg);
return 0;
}
