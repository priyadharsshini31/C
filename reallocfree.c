#include<stdio.h>
void main()
{
int i;
int *p=(int*) malloc(5*sizeof(int));
memset(p,0,5*sizeof(int));
for(i=0;i<=5;i++)
{
printf("%d",*(p+i));
}
int*ptr=(int*)realloc(p,0);//realloc to free memory
for(i=0;i<=5;i++)
{
printf("%d",*(ptr+i));
}

}
