#include <cstdlib>
#include <iostream>
#include "conio.h"

using namespace std;

int main(int argc, char *argv[])
{
    printf("Dairenin yaricapini girin: ");
    float r, alan, pi=3.14;
    scanf("%f", &r);
    alan = pi*r*r;
    printf("Yaricapi=%3.1f olan dairenin alani=%3.2f olur", r, alan);
    getch();
}
