#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

float mutlak(float s){
    if(s >= 0) return s;
    else return -s;
} 

int main(int argc, char *argv[])
{
    float x=-3.14;
    printf("|%.2f| = %.2f\n\n", x, mutlak(x));
    
    getch();
    return EXIT_SUCCESS;
}
