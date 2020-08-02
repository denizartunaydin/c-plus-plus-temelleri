#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    char* gunler[]={"Pazartesi", "Sali", "Carsamba",
        "Persembe", "Cuma", "Cumartesi", "Pazar"};
    for(int n=0; n<7; n++)
        printf("%d : %s\n", n+1, gunler[n]);

    int g;
    do {
        printf("\n\nHaftanin gun numarasini girin:");
        scanf("%d", &g);
        if(g<1 || g>7) printf("1-7 arasi gun numarasi girin!");
        else printf("Haftanin %d. gunu = %s", g, gunler[g-1]);
    } while(g>=1 && g<=7);
    

    getch();
}
