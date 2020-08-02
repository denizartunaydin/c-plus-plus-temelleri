#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int ay;
    printf("Ay numarasini girin:");
    scanf("%d", &ay);
    if(ay<1 || ay>12) printf("1-12 arasi bir ay numarasi girin!");
    else if(ay>=9 && ay<=11) printf("Sonbahar");
    else if(ay>=3 && ay<=5) printf("Ilkbahar");
    else if(ay>=6 && ay<=8) printf("Yaz");
    else printf("Kis");
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
