#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

void diziyaz(double d[], int adet){
    for(int i=0; i<adet; i++){
        printf("dizi[%d]=%7.2f\n", i, d[i]);
    }
}

int main(int argc, char *argv[])
{
    double xyz[] = {3.14,5,7,9,4,6};
    diziyaz(xyz, 6);

    getch();
}
