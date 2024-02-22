#include<stdio.h>
void main()
{
    int a,b,c;//static memory
    printf("Enter three numbers \n");// \n->nextline
    /*
    Enter three numbers
    12
    45
    67
    a[100]--50  balance 50 waste free memory 
    efficient  memory usage max
    */
   int *p,*q,*r;
   *p=&a;//malloc(sizeof(int));//dynamic  memory allocation
   *q=&b;
   *r=&c;
    scanf("%d %d %d",p,q,r);//interger %d
    if (a>b && a>c)
    {
        printf("%d is largest",a);
    }
    else  if(b>a && b>c)
    {
        printf("%d is largest",b);
    }
    else
        printf("%d is largest",c);
}
/*printf
scanf
if
else
else if

char-character
int -interger
float-decimal

*/
