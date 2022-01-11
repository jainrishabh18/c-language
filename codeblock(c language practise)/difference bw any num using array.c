#include<stdio.h>
#include<conio.h>
/*program to find diiference between any number*/
int main()
{
    int size;
    printf("enter the size of array=");
    scanf("%d",&size);
    int a[size];
    printf("enter the array=");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    int x,y;
    printf("enter the position to find difference=");
    scanf("%d%d",&x,&y);
    int difference=0;
    difference=a[x-1]-a[y-1];
    printf("the difference is=%d\n",difference);
return 0;
}
