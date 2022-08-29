
#include <stdio.h>
int Lcm(int a, int b);
int main()
{
   int n1,n2;
   printf("Enter the two numbers\n");
   scanf("%d %d",&n1,&n2);
   printf("The Lcm of the two given numbers are %d",Lcm(n1,n2));
    return 0;
}

int Lcm(int a, int b)
{
    int i;
    for(i=1;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            return i;
        }
    }
}
