#include <cstdlib>
#include <iostream>
#include "conio.h"

using namespace std;

int main(int argc, char *argv[])
{
    int a=3, b=4, c=5, cevre;
    cevre = a+b+c;
    //printf("a=%d, b=%d, c=%d olan ucgenin cevresi=%d", a, b, c, cevre);
    printf("a=%d, ", a);
    printf("b=%d, ", b);
    printf("c=%d olan ucgenin ", c);
    printf("cevresi =%d", cevre);
    
    
    getch();
    return 0;
}
