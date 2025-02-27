// 12S24012 - Choqy Pananda Sirait
// 12S24050 - Ester Hasianna Nainggolan

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[61]; 
    scanf("%60s", input);

    int panjangstring = strlen(input);

    if (panjangstring % 3 != 0) {
        printf("Panjang Inputan String Bukan Kelipatan 3!\n");
        return 1;
    }

    for (int i = 0; i < panjangstring; i++) {
        if (!isdigit(input[i])) {
            printf("Input harus berupa angka!\n");
            return 1;
        }
    }

    for (int i = 0; i < panjangstring; i += 3) {
        int Nilai_ASCII;
        sscanf(&input[i], "%3d", &Nilai_ASCII); 
        printf("%c", Nilai_ASCII);  
    }

    printf("\n");  
    return 0;
}

