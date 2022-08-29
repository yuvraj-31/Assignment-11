
#include <stdio.h>
int Prime_next(int);
int main()
{
   int n;
   printf("Enter the number\n");
   scanf("%d",&n);
   int s=Prime_next(n);
   printf("%d is the next prime number of the given number\n",s);
   
   return 0;
}

int Prime_next(int a)
{
    int i,j;
    for(i=a+1;i<a+7;i++)
    {   for(j=2;j<i;j++)
         {
             if(i%j==0)
              {
                break;
              }
         }
         if(j==i)
        {
            return i;
        }
        
    }
    
}
