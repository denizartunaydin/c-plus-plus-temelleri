#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

void degistir(float &x, float &y){
     float g = x;
     x = y;
     y = g;
}
int main(int argc, char *argv[])
{
    float a=3.14, b=9.81;
    printf("a=%5.2f ve b=%5.2f\n", a, b);
    degistir(a, b);
    printf("a=%5.2f ve b=%5.2f\n", a, b);

    getch();
    return EXIT_SUCCESS;
}
