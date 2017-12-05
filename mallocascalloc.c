#include<stdio.h>
void main()
{
int *a,i;
a=(int*)malloc(5*sizeof(int));
memset(a,0,5*sizeof(int));
for(i=0;i<=5;i++)
{
printf("%d",*(a+i));
}
}
