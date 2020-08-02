#include <cstdlib>
#include <iostream>
#include "conio.h"

using namespace std;

int main(int argc, char *argv[])
{
    int i, n;
    printf("Bir tamsayi girin: ");
    scanf("%d", &n);
    for(i=n; i>0; i--){
        printf("%d\n", i);
    }
    
    getch();
}
