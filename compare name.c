#include<stdio.h>
int main()
{
    int a[10],sum=0;//array
    float avg;
    /*
    [0,1,2,3,4,5,6,7,8,9]
    */
   printf("Enter the number of elements(less than 10)\n");
   int limit;
   scanf("%d",&limit);
   printf("Enter the numbers\n");
   for(int i=0;i<limit;i++)
   {
    scanf("%d",&a[i]); //i index
    //read limit of elements
    sum=sum+a[i];//sum
   }
   avg=sum/(1.0*limit);//conversion
   printf("The sum is %d\n",sum);
   printf("The average is %f ",avg);
   //32/7=4.571428571428571;
   return 0;
}
