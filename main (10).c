

#include <stdio.h>
int Fact(int a);
int Sum(int, int);
int main()
{
   int i,s=0,fact;
   for(i=1;i<=5;i++)
   {
      fact=Fact(i)/i; 
      s=Sum(s,fact);
   }
   printf("The sum of the series is %d",s);

    return 0;
}

//factorial function to calculate factorial
int Fact(int a)
{   int fact1=1;
    for(int i=a;i!=1;i--)
    {
       fact1=fact1*i ;
    }
    return fact1;
}
// add function to find sum
int Sum(int a, int b)
{
    return a+b;
}
