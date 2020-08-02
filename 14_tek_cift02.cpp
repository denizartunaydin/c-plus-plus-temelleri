#include <cstdlib>
#include <iostream>
#include "conio.h"
using namespace std;

int main(int argc, char *argv[])
{
    int s, tt=0, tc=0;
    int tekadet=0, ciftadet=0;
    do {
        printf("Tamsayi girin: ");
        scanf("%d", &s);
        if(s==0) break;
        else if(s%2==0) {
            tc = tc + s;
            ciftadet++;
            }
        else {
            tt = tt + s;
            tekadet++;
            }
    } while(s!=0);
    printf("%d adet teklerin toplami=%d\n%d adet ciftlerin toplami=%d", tekadet,  tt, ciftadet, tc);
    getch();
}
