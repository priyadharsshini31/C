#include<stdio.h>
void main()
{
static int a; //static variables will be initialised to 0 by default
int b; // garbage value
printf("%d %d",a,b);
}
