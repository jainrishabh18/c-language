#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  printf("enter no of elements in array=");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
  int s=a[0],p=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]<s)
    {
      s=a[i];
      p=i+1;
    }
  }
  printf("smallest number=%d\n",s);
  printf("position of the smallest number=%d",p);
  getch();
}
