#include <cstdlib>
#include <iostream>
#include "conio.h"

using namespace std;

int main(int argc, char *argv[])
{
    int ort;
    printf("Ortalamayi girin: ");
    scanf("%d", &ort);
    if(ort<0 || ort>100) printf("0-100 arasi tamsayi girin!");
    else if(ort<30) printf("FF (Basarisiz)");
    else if(ort<40) printf("FD (Basarisiz)");
    else if(ort<45) printf("DD (Kosullu Gecer)");
    else if(ort<50) printf("DC (Kosullu Gecer)");
    else if(ort<60) printf("CC (Gecer)");
    else if(ort<70) printf("CB (Orta)");
    else if(ort<75) printf("BB (Iyi)");
    else if(ort<85) printf("BA (Pekiyi)");
    else printf("AA (Mukemmel)");
    getch();
}
