#include<stdio.h>
#include<conio.h>
int main()
{
    int size,i,max=0,min=0;
    printf("enter the size of array=");
    scanf("%d",&size);
    int a[size];
    printf("enter numbers in array=");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]>max)
        {
         max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("the largest numbers is %d\n",max);
    printf("the smallest numbers is %d\n",min);
    int diff=0;
    diff=max-min;
    printf("enter the difference=%d\n",diff);


return 0;
}


