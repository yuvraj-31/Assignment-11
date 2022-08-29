
#include <stdio.h>
int Prime_no(int,int);
int main()
{
   int n1,n2;
   printf("Enter the two numbers\n");
   scanf("%d %d",&n1,&n2);
   printf("The prime numbers in the given range are:\n");
   Prime_no(n1,n2);
    return 0;
}

int Prime_no(int a,int b)
{
    int i,j;
    for(i=a;i<=b;i++)
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
        }
        
    }
    
}
