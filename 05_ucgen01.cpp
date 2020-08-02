#include <cstdlib>
#include <iostream>
#include "conio.h"

using namespace std;

int main(int argc, char *argv[])
{
    printf("Ucgenin keanrlarini girin: ");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("Kenarlari %d, %d, %d olan ucgenin cevresi=%d", a,b,c,a+b+c);
    getch();
}
