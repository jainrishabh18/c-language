#include<stdio.h>
#include<conio.h>
/* WAP to find first 2 max numbers in an array */
int main()
{
    int size,fmax=0,smax=0,p,q,i,temp;
    printf("enter the size of array=");
    scanf("%d",&size);
    int a[size];
    printf("enter the array=");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    fmax=a[0];
    p =0;
    smax=a[1];
    q =1;
        if(smax>fmax)
        {
            temp=smax;
            smax=fmax;
            fmax=temp;
        }
        for(i=2;i<size;i++)
        {
            if(a[i]>fmax)
            {
                smax=fmax;
                fmax=a[i];
            }
            else if (a[i]>smax)
            {
                smax=a[i];
            }

        }
        printf("enter first max=%d\n",fmax);
        printf("enter second max=%d\n",smax);

return 0;
}
