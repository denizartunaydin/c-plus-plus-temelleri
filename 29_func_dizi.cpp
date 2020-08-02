#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

void deb(int d[], int n, int &eb, int &ek){
    eb = d[0];
    ek = d[0];
    for(int i=0; i<n; i++){
        if(d[i] > eb) eb = d[i];
        if(d[i] < ek) ek = d[i];
    }
}

int main(int argc, char *argv[])
{
    int a[] = {1,-9,4,7,6,4,8,0};
    int b, k;
    deb(a, 8, b, k);
    printf("En buyuk=%d, En kucuk=%d", b, k);
    
    getch();
}
