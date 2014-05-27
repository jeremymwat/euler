// Project Euler problem 004
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome (int x);

int main (void)
{
    int answer = 0;
    for (int i = 999; i > 900; i--)
    {
        for (int j=999; j > 900 ; j--)
            {
                if (isPalindrome(i * j) && (i*j) > answer )
                {
                    answer = i * j;
                }
            }
    }
    printf ("%d \n", answer);
    return 0;
}

bool isPalindrome (int x)
{
    if (x % 10 == 0) { return false; }
    int n = 0;
    while (x > n)
    {
        n = (n * 10) + (x % 10);
        x = x / 10;
        if (x == n || (x / 10) == n) {return true;}
    }
    return false;

}
