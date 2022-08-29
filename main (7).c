
#include <stdio.h>
int Fibo(int);
int main()
{
   int n;
   printf("Enter a number\n");
   scanf("%d",&n);
   printf("The first %d terms of Fibonacci series are:\n",n);
   Fibo(n);
   return 0;
}

int Fibo(int a)
{
    int b=-1,c=1,i,fibo;
    for(i=1;i<=a;i++)
    {  
        fibo=b+c;
        printf("%d ",fibo);
        b=c;
        c=fibo;
    }
    
}
