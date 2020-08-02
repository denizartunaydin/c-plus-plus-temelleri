#include <cstdlib>
#include <iostream>
#include "conio.h"

using namespace std;

int main(int argc, char *argv[])
{
    float pi=3.14,
          g=9.81,
          u=0.1239;
    int genislik = 20,
        ondalik = 5;
    printf("%*.*f\n", genislik, ondalik, pi);
    printf("%*.*f\n", genislik, ondalik, g);
    printf("%*.*f\n", genislik, ondalik, u);
    getch();
}
