#include<stdio.h>
void main()
{
int *p,i;
p=(int*)malloc(2*sizeof(int));
*p=10;
*(p+1)=20;
for(i=0;i<=1;i++)
{
printf("%d\n",*(p+i));
}
free(p);
}
