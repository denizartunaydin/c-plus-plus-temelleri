#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

float mutlak(float s){
    if(s >= 0) return s;
    else return -s;
} 

void mutlak2(float &s){
    if(s < 0) s=-s;
} 

int main(int argc, char *argv[])
{
    float x=-3.14;
    printf("|%.2f| = %.2f\n", x, mutlak(x));
    printf("%f\n", x);
    
    mutlak2(x);
    printf("%f\n", x);

    getch();
    return EXIT_SUCCESS;
}
