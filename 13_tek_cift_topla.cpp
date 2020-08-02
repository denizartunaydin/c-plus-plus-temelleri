#include <cstdlib>
#include <iostream>
#include "conio.h"
using namespace std;

int main(int argc, char *argv[])
{
    int s, tt=0, tc=0;
    do {
        printf("Tamsayi girin: ");
        scanf("%d", &s);
        if(s%2==0) tc = tc + s;
        else tt = tt + s;
    } while(s!=0);
    printf("Teklerin toplami=%d\nCiftlerin toplami=%d", tt, tc);
    getch();
}
