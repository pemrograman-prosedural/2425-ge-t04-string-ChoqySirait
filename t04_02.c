// 12S24012 - Choqy Pananda Sirait
// 12S24050 - Ester Hasianna Nainggolan

#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {
  
      char input[20]; 
      scanf("%20[^\n]", input); 
  
      int PanjangString = strlen(input);
  
      for (int i = 0; i < PanjangString; i++) {
          printf("%03d", input[i]); 
      }
  
      return 0;
  }
  
