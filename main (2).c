
#include <stdio.h>
int Hcf(int a, int b);
int main()
{
   int n1,n2;
   printf("Enter the two numbers\n");
   scanf("%d %d",&n1,&n2);
   printf("The HCF of the two given numbers are %d",Hcf(n1,n2));
    return 0;
}

int Hcf(int a, int b)
{
    int i,counter,min;
    min=a>b?b:a;
    for(i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        {
             counter=i;
        }
    }
    return counter;
}
