
#include <stdio.h>
int pascal(int, int);
int Fact(int a);
int main()
{
    int a=5,b=11;
    pascal(a,b);
    return 0;
}

int pascal(int i,int j)
{
    int k;
    for(i=1;i<=6;i++)
    {   k=0;
        for(j=1;j<=11;j++)
        {
            if(j>=7-i && j<7)
            {
                if(i%2==0)
                {
                    if(j%2!=0)
                    {
                        printf(" %d",Fact(i-1)/(Fact(i-1-k)*Fact(k)));
                        k++;
                        
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                else
                {
                    if(j%2==0)
                    {
                        printf(" %d",Fact(i-1)/(Fact(i-1-k)*Fact(k)));
                        k++;
                        
                    }
                    else
                    {
                        printf("  ");
                    }
                }
            }
            else if(j<=5+i && j>6)
            {
                if(i%2==0)
                {
                    if(j%2!=0)
                    {
                        printf(" %d",Fact(i-1)/(Fact(i-1-k)*Fact(k)));
                        k++;
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                else
                {
                    if(j%2==0)
                    {
                        printf(" %d",Fact(i-1)/(Fact(i-1-k)*Fact(k)));
                        k++;
                        
                    }
                    else
                    {
                        printf("  ");
                    }
                }
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n\n");
    }
    
}


int Fact(int a)
{   
    int fact=1;
    if(a>=1)
    {
      for(int i=a;i!=1;i--)
      {
         fact=fact*i;
      }
      return fact;
    }
    else
    {
    return 1;
    }
}
 
