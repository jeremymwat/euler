#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool prime (int x)
{
    int i;
    for (i = 2; i < (sqrt(x) + 1); i++)
    {
        if (x % i == 0 && i != x){return false;}
    }
    return true;
}

int main (void)
{
    int count = 0;
    int checknum = 3;
    while (count < 10000)
    {
        if (prime(checknum))
        {
            count++;
            checknum = checknum + 2;
        } else {checknum++;}

    }
    

    printf("%d %f \n", (checknum-1));
    return 0;
}
