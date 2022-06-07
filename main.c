#include <stdlib.h>
#include <stdio.h>
#include <math_utils.h>
int main()
{   int x,y;
    printf("Podaj dwie liczby:");
    scanf("%d%d",&x,&y);
    printf("Wypisuje NWD: %d",gcd(x,y));
    printf("Wypisuje NWW: %d",lcm(x,y));

    return 0;
}
