#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

float kare(float s){
    return s*s;
} 

float kuvvet(float x, int y){
    float c=1;
    for(int i=1; i<=y; i++){
        c = c * x;
    }
    return c;
}

int main(int argc, char *argv[])
{
    float x=3.14;
    printf("%.2f'nin karesi=%.2f\n\n", x, kare(x));
    
    printf("%.2f uzeri %d = %.2f\n\n", x, 3, kuvvet(x, 3));

    getch();
    return EXIT_SUCCESS;
}
