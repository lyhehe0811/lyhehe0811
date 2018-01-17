#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "malloc.h"

int main()
{
    int a;
    scanf("%d",&a);
    if(a<0)
        printf("负数\n",a);
    if(a>0)
        printf("正数\n",a);
    if(a%2==0)
        printf("偶数\n",a);
    else
        printf("奇数\n",a);
    return 0;
}
