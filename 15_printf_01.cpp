#include <cstdlib>
#include <iostream>
#include "conio.h"
using namespace std;

int main(int argc, char *argv[])
{
    int s=5, y=30;
    printf("%d'nin %%%d'si %.2f'dir\n\n\n", s, y, double(s*y)/100);
    
    int v=5, f=100;
    double ort = (v+f)/2.0;
    printf("Vize     = %5d\n", v);
    printf("Final    = %5d\n", f);
    printf("Ortalama = %5.1f\n\n\n\n", ort);
    
    printf("%10d %10d %10.1f\n",v,f,ort);
    printf("%10d %10d %10.1f\n",v,f,ort);
    printf("%10d %10d %10.1f\n",v,f,ort);
    
    printf("%-10d %-10d %-10.1f\n",v,f,ort);
    printf("%-10d %-10d %-10.1f\n",v,f,ort);
    printf("%-10d %-10d %-10.1f\n",v,f,ort);
    
    
    
    getch();
}
