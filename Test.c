#include "stdio.h"
#include "string.h"


void decrypt(char* str, char key) {
	// str = encrypted version
	// key 
	// decrypts str with a given key
	int length = strlen(str);
	for (int i = 0; i < length; i++ ) { // make a loop for decryption
	// use strlen -> twice for loop
	 // for (int i =0; str[i] != '\0'; i++) is better.
		str[i] = str[i] ^ key;
	}
}


void test(char* str1, char* str2) {
	// str1 = secret word
	// str2 = encrypted version
	// tests all chars between A and Z for the key

	char tempStr[100]; 
	for (char key = 'A'; key <= 'Z'; key++) {
		strcpy(tempStr, str2); // make a copy of the encrypted version, so it won't be changed during loop.
		
		decrypt(tempStr, key);

		if (strcmp(str1, tempStr) == 0) {
			printf("Cracked the code! The encryption key is '%c'\n", key);
			return;
		}
		else {
			printf("Decrypted code with the key '%c': %s\n", key, tempStr);
		}
	}

	//feedback
	// void test(char* str1, char* str2) {
// 		for (char i = 'A'; i <= 'Z'; i++) {
// 			decrypt(str2, i);
// 			if (strcmp(str1, tempStr) == 0) {
// 				printf("Cracked the code! The encryption key is '%c'\n", i);
// 				return;
// 			}
// 			else {
// 				printf("Decrypted code with the key '%c': %s\n", i, str2);
// 			}
//			decrypt(str2, i);
// 		}
// 	}
// }

int main(int argc, char** argv) {
	test(argv[1], argv[2]);

	return 0;

}