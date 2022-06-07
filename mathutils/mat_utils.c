#include "math_utils.h"
#include <stdlib.h>



int gcd(int x, int y)
{
    if(y!=0)
    {
        return gcd(y,x%y);
    }
    return x;
}
int lcm(int x, int y)
{   int wynik = (x/gcd(x,y))*y;
    return wynik;
}