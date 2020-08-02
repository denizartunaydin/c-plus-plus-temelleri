#include <cstdlib>
#include <iostream>
#include "conio.h"

using namespace std;

int main(int argc, char *argv[])
{
    float x, y, t;
    printf("Bir kesirli sayi girin:");
    scanf("%f", &x);
    printf("Bir kesirli sayi daha girin:");
    scanf("%f", &y);
    t = x+y;
    printf("%f + %f = %f", x, y, t);

    getch();
}
