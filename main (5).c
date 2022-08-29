
#include <stdio.h>
int Prime_no(int);
int main()
{
   int n;
   printf("Enter the number\n");
   scanf("%d",&n);
   printf("The first %d prime numbers are:\n",n);
   Prime_no(n);
    return 0;
}

int Prime_no(int a)
{
    int i,j,counter=0;
    for(i=1;counter!=a;i++)
    {   for(j=2;j<i;j++)
         {
             if(i%j==0)
              {
                break;
              }
         }
         if(j==i)
        {
        printf("%d ",i);
        counter++;
        }
        
    }
    
}
