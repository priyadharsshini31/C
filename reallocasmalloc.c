#include<stdio.h>
void main()
{
int i;
int *p=(int*) realloc(NULL,5*sizeof(int));
memset(p,0,5*sizeof(int));
for(i=0;i<=5;i++)
{
printf("%d",*(p+i));
}
}
