#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "malloc.h"

int main()
{
    int a;
    scanf("%d",&a);
    if(a<0)
        printf("����\n",a);
    if(a>0)
        printf("����\n",a);
    if(a%2==0)
        printf("ż��\n",a);
    else
        printf("����\n",a);
    return 0;
}
