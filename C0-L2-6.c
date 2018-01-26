#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main()
{
    int test[100] = { 0 }, a[100] = { 0 }, i, j=0;
    for (i = 0; i<101; i++)
    {
        test[0] = 1;
        test[i] = i + 1;
    }
    for (i = 0; i < 100; i++)
    {
        if (test[i] % 7 == 0 && test[i] % 10 == 7)
        {
        a[j] = test[i];
        printf("%d\n", a[j]);
        j++;
        }
    }
system("pause");
return 0;
}
