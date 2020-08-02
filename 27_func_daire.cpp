#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

void daire(float r, float &Alan, float &Cevre){
    Alan = 3.14 * r * r;    // pi*r^2
    Cevre = 2 * 3.14 * r;   // 2*pi*r
}

int main(int argc, char *argv[])
{
    float r=5, a, c;
    daire(r, a, c);
    printf("r=%.2f, Alan=%.2f, Cevre=%.2f", r, a, c);

    getch();
    return EXIT_SUCCESS;
}
