#include "stdio.h"
#include "string.h"

void decrypt(char* str, char key) {
	// str = encrypted version
	// key 
	// decrypts str with a given key
	int length = strlen(str);
	for (int i = 0; i < length; i++) { // make a loop for decryption
		str[i] = str[i] ^ key;
	}
}

int main(int argc, char** argv) {
	char* encrypted = argv[1];
	char key = *argv[2];

	char tempStr[100];
	strcpy(tempStr, encrypted); // make a copy of the encrypted message
	decrypt(tempStr, key);


	printf(tempStr); // print the decrpyted message

	return 0;
}
