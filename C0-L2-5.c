#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100]={0},i=0,j=0;
    for
        (i=0;i<100;i++)
    {
        a[0]=1;
        a[i]=i+1;
    }
    int b[100]={0};
    for(    i=0; i<100;i++)
{
    if(a[i]%3==0&&a[i]%5!=0)
    {
        b[j]=a[i];
        printf("%d\n", b[j]);
        j++;
    }
}
}
