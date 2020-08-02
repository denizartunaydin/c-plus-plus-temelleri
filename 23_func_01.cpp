#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

void yaz(){
     printf("U.U. Gemlik Asim Kocabiyik Meslek Yuksekokulu\n");
}

void topla(int a, int b){
     printf("%d+%d=%d\n", a, b, a+b);
}

int buyuk(int s1, int s2){
    if(s1>s2) return s1;
    else return s2;
}

int main(int argc, char *argv[])
{
    yaz();
    yaz();
    yaz();

    int x=5, y=10;
    topla(5, 6);
    topla(x, y);
 
    printf("%d ve %d'den buyuk olan %d\n", 8, 4, buyuk(8,4));
    int eb;
    eb = buyuk(x,y);
    printf("%d ve %d'den buyuk olan %d\n", x, y, eb);   
    getch();
    return EXIT_SUCCESS;
}
