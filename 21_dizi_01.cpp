#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int ay[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(int n=0; n<12; n++){
        printf("%2d. ay %d gundur\n", n+1, ay[n]);
    }
    
    getch();
    return EXIT_SUCCESS;
}
