#include "Prime.h"
<<<<<<< HEAD
=======

>>>>>>> 28d608936242ecceb7a03280f07e64ec1ca19334
#include <cmath>

void Prime::setValue(int prime)
{
    this->prime = prime;
}
bool Prime::isValid()
{
    if (prime == 1)
        return false;
    for (long long i = 2; i <= sqrt(prime); i++)
        if (prime % i == 0)
            return false;
    return true;
}
bool Prime::checkPrime(int prime) 
{
    if (prime == 1)
        return false;
    for (long long i = 2; i <= sqrt(prime); i++)
        if (prime % i == 0)
            return false;
    return true;
}
int Prime::countBetween(Prime& prime)
{
    int begin = this->prime + 1;
    int end = prime.prime;
    int count = 0;
    for (int i = begin; i < end; ++i) {
        if (checkPrime(i)) {
            ++count;
        }
    }
    return count;
}
Prime Prime::nextPrime()
{
    int val = prime + 1;
    while (!checkPrime(val)) {
        ++val;
    }
    Prime next_prime;
    next_prime.prime = val;
    return next_prime;
}
int Prime::getValue()
{
    return prime;
}