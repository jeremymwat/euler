// findin primes the lazy way
// Euler problem 007

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool prime (int x)
{
    for (int i = 2; i < (sqrt(x) + 1); i++)
    {
        if (x % i == 0 && i != x){return false;}
    }
    return true;
}

int main (void)
{
    int count = 0;
    int checknum = 2;
    while (count < 10001)
    {
        if (prime(checknum))
        {
            count++;
            checknum++;
        } else {checknum++;}

    }

    printf("%d \n", (checknum-1));
    return 0;
}
