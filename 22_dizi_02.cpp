#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    float s[5];
    for(int n=0; n<5; n++){
        printf("%d. kesirli sayiyi girin:", n+1);
        scanf("%f", &s[n]);
    }
    
    for(int n=4; n>=0; n--){
        printf("%d. kesirli sayiyi=%f\n", n+1, s[n]);
    }
    
    getch();
    return EXIT_SUCCESS;
}
