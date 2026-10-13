#include <stdio.h>

int main(void) {
  // Reads stdin character by character and echoes it back with every
  // vowel doubled. Stops at EOF.
  int z;
  
 while (( z = getchar()) != EOF) {
      
     if (z == 'a' || z == 'e' || z == 'i' || z == 'o' || z =='u' || z == 'A' || z == 'E' || z == 'I' || z == 'O' || z == 'U' ) { 
	 putchar(z);
	 putchar(z);
     } else {
       putchar(z);
    }
 }     
       	return 0;
}
