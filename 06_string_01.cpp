#include <cstdlib>
#include <iostream>
#include "conio.h"

using namespace std;

int main(int argc, char *argv[])
{
    char x[20] = "Gemlik";
    printf("%9s\n", x);
    printf("%8s\n", x);
    printf("%7s\n", x);
    printf("%6s\n", x);
    getch();
}
