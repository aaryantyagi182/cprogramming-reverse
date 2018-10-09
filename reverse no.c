#include <stdio.h>
int main()
{
    int a,b,t;
    printf("enter a no.");
    scanf("%d", &a);
    if (a>=10000)
        while (a>0)
       {
          b=a%10;
          printf("%d",b);
          a=a/10;
       }

return 0;
}

