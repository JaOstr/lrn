#include "prime.h"

int isprime(long int number)
{
    long int j = 0;

    for (j = 2; j*j <= number; j++)
    {
        if (number % j == 0) 
            return 0;
    }
    return 1;
}

