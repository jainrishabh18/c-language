#include<stdio.h>
#include<conio.h>
/*eneter the first max and second max num using array*/
int main()
{
int size,firstmax=0,secondmax=0;
printf("enter the size of array=");
scanf("%d",&size);
int  a[size];
printf("enter the elements of array");
for(int i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
int temp;
firstmax=a[0];
secondmax=a[1];
if(secondmax>firstmax)
{
    temp=secondmax;
    secondmax=firstmax;
    firstmax=temp;

}
for(int i=2;i<size;i++)
{
    if(a[i]>firstmax)
{
    secondmax=firstmax;
    firstmax=a[i];
}
    else if(a[i]>secondmax)
    secondmax=a[i];
}
printf("firstmax=%d\n",firstmax);
printf("secondmax=%d\n",secondmax);

return 0;
}
