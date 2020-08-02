#include <cstdlib>
#include <iostream>
#include "conio.h"

using namespace std;

int main(int argc, char *argv[])
{
    int s, toplam=0;
    for(int i=1; i<=10; i++){
        printf("Tamsayi girin: ");
        scanf("%d", &s);
        if(s==0) break;
        toplam+=s;
    }
    printf("Toplam=%d", toplam);
    getch();
}
