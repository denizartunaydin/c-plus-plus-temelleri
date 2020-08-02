#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

bool asal(int n){
    for(int i=2; i<n; i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(int argc, char *argv[])
{
    int x = 5;
    if(asal(x)) printf("%d asal", x);
    else printf("%d asal degil", x);
    getch();
}
