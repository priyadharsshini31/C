#include<stdio.h>
void main()
{
int *p,*ptr,i,j;
p=(int*)malloc(2*sizeof(int));
*p=10;
*(p+1)=20;
for(i=0;i<=1;i++)
{
printf("%d\n",*(p+i));
}
ptr=(int*)realloc(p,3*sizeof(int));
*(p+2)=30;
for(j=0;j<=2;j++)
{
printf("%d\n",*(p+j));
}
free(p);
}
