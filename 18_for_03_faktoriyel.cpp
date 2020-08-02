#include <cstdlib>
#include <iostream>
#include "conio.h"

using namespace std;

int main(int argc, char *argv[])
{
    int i, f=1, n;
    printf("Kac faktoriyel'i hesaplayacaksiniz: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        f*=i;
    }
    printf("%d", f);
    getch();
}
