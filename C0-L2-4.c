#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a[98]={0};
    for(i=1;i<98;i++)
    {
        a[i] = i+1;
    }
    int j,b[j];
    for(i=1; i<98;i++)
{
    if(a[i]%2==0)
    {
        b[j]=a[i];
        printf("%d\n", b[j]);
        j++;
    }
}
    return 0;
}
