#include <cstdlib>
#include <iostream>
#include "conio.h"

using namespace std;

int main(int argc, char *argv[])
{
    int vize, final;
    printf("Vize notunuzu girin: ");
    scanf("%d", &vize);
    printf("Final notunuzu girin: ");
    scanf("%d", &final);
    double ort;
    ort = (double)(vize+final)/2;
    // �stteki iki sat�r double ort=(vize+final)/2; �eklinde birle�tirilebilir
    printf("Vize=%d, Final=%d, Ortalama=%8.2f\n", vize, final, ort);
    if(ort>=40) printf("Gectiniz");
    else printf("Kaldiniz");
    getch();
}
