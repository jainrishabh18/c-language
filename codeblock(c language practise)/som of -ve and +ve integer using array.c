#include<stdio.h>
#include<conio.h>
int main()
{
    int size,i,pos=0,neg=0;
    printf("enter size of array");
    scanf("%d",&size);
    int array[size];
    printf("enter numbers to find sum of -ve and +ve integer")
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<size;i++)
    {
        if(array[i]>0)
        pos=pos+array[i];
        if(array[i]<0)
            neg=neg+array[i]

    }


return 0;
}
