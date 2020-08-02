#include <cstdlib>
#include <iostream>
#include "conio.h"

using namespace std;

int main(int argc, char *argv[])
{
    float s;
    printf("Kesirli sayi girin:");
    scanf("%f", &s);
    printf("Genislik ve ondaligi girin:");
    int g, o;
    scanf("%d %d", &g, &o);
    printf("%0*.*f", g, o, s);
    getch();
}
