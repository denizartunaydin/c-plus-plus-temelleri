#include <cstdlib>
#include <iostream>
#include "conio.h"

using namespace std;

int main(int argc, char *argv[])
{
    int i, x;
    printf("Bir tamsayi girin: ");
    scanf("%d", &x);
    for(i=1; i<=x; i++){
        if(i%3==0 && i%4==0) printf("%d\n", i);
    }
    
    getch();
}
