#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a%4==0)
        printf("闰年\n",a);
    else
        printf("不是闰年\n",a);
    return 0;
}
