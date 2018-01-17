#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
        printf("zhengshu\n",a);
    if(a<0)
        printf("fushu\n",a);
    if(a%2==0)
        printf("oushu\n",a);
    else
        printf("jishu\n",a);
    return 0;
}
