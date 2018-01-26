#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    while(scanf("%d",&a)!= EOF)
    {
        while(a>0)
        {
            printf("%d",a%10);
            a = a/10;
        }
        printf("\n");
    }
}
