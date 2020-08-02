#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

void sifirla(float &a){
    a=0;
}

int main(int argc, char *argv[])
{
    float x=2012;
    printf("x=%f\n", x);
    sifirla(x);
    printf("x=%f\n", x);

    getch();
    return EXIT_SUCCESS;
}
