#include<stdio.h>

intmain()
{
file *fp;

fp=fopen("file.txt","w+");
fputs("this is tutorialspoint.com",fp);
fclose(fp);

return(0);
}

19bcon064
