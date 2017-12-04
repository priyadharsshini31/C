#include<stdio.h>
int demo()
{
static int count=0;
count++;
return count;
}
void main()
{
printf("%d ",demo());
printf("%d ",demo());
}
