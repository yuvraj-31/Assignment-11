

#include <stdio.h>
float square(float a);
int main()
{
   float n;
   printf("Enter a number\n");
   scanf("%f",&n);
   printf("The square of the given number is %0.3f",square(n));

    return 0;
}
float square(float a)
{
    return a*a;
}
