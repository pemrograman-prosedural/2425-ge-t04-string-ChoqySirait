// 12S24012 - Choqy Pananda Sirait
// 12S24050 - Ester Hasianna Nainggolan

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int _argc, char **_argv) {
    char input[61];  
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0; 

    int panjangstring = strlen(input);

    int hanyaAngka = 1;
    for (int i = 0; i < panjangstring; i++) {
        if (!isdigit(input[i])) {
            hanyaAngka = 0;
            break;
        }
    }

    if (!hanyaAngka) {
        printf("%s\n", input);
        return 0;
    }

    if (panjangstring % 3 != 0) {
        printf("Panjang Inputan String Bukan Kelipatan 3!\n");
        return 1;
    }

    for (int i = 0; i < panjangstring; i += 3) {
        int Nilai_ASCII;
        sscanf(&input[i], "%3d", &Nilai_ASCII); 
        printf("%c", Nilai_ASCII);  
    }

    printf("\n");  
    return 0;
}
