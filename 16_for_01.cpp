#include <cstdlib>
#include <iostream>
#include "conio.h"

using namespace std;

int main(int argc, char *argv[])
{
    for(int i=1; i<=100; i+=2){
        printf("%3d\n", i);
    }
    getch();
}
