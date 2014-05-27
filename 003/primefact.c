// Solution to Euler problem 003
//yay bruteforce

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool prime (long long int num);

int main (void)
{
    long long int magicnum = 600851475143;
    for (int i = 2; i < (magicnum/2) + 1; i++)
    {
        if (magicnum % i == 0 && prime (magicnum / i))
        {
            printf("Largest prime factor is %lld \n", (magicnum/i));
            break;
        }
    }
}


bool prime (long long int num)
{
    for (int i = 2; i < (sqrt(x) + 1); i++)
    {
        if (x % i == 0 && i != x){return false;}
    }
    return true;
}
