#include<stdio.h>
void main()
{
int *p,i;
p=(int*)calloc(5,sizeof(int));
for(i=0;i<=5;i++)
{
printf("%d\n",*(p+i));
}
}
