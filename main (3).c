
#include <stdio.h>
int Prime(int);
int main()
{
   int n;
   printf("Enter the number\n");
   scanf("%d",&n);
   int s=Prime(n);
   if(s==1)
   printf("Given number is a prime number\n");
   else
   printf("Given number is not a prime number\n");
   
    return 0;
}

int Prime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
        
    }
    if(i==a)
    {
    return 1;
    }
}
