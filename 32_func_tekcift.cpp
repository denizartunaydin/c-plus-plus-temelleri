#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

bool tek(int s){
    if(s%2==1) return true;
    else return false;
}

bool cift(int s){
    if(s%2==1) return false;
    else return true;
}

int main(int argc, char *argv[])
{
    int x=5, y=10;

    if(tek(x)) printf("%d tek\n", x);
    else printf("%d cift\n", x);

    if(cift(y)) printf("%d cift\n", y);
    else printf("%d tek\n", y);

    getch();
}
