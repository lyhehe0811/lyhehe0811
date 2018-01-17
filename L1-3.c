#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a%13==0)
        printf("yes\n",a);
    else
        printf("NO\n",a);
    return 0;
}
