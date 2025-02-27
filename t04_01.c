// 12S24012 - Choqy Pananda Sirait
// 12S24050 - Ester Hasianna Nainggolan

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[61];   
    scanf("%60s", input);

    int panjangstring = strlen(input);

    if (panjangstring % 3 != 0) {
        printf("Panjang Inputan String Bukan Kelipatan 3!\n");
        return 1;
    }

    for (int i = 0; i < panjangstring; i += 3) {
        char Penampung_Sementara[4] = {0};  
        strncpy(Penampung_Sementara, &input[i], 3);  
        int Nilai_ASCII = atoi(Penampung_Sementara);  
        printf("%c", Nilai_ASCII);  
    }

    printf("\n");  
    return 0;
}

