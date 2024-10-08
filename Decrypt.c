#include "stdio.h"
#include "string.h"

void decrypt(char* str, char key) {
	// str = encrypted version
	// key 
	// decrypts str with a given key
	int length = strlen(str); // feedback: strlen() is a very expensive function to call (O(n)). It is not necessary here because you can terminate the loop by using a condition like str[i] != '\0';
	for (int i = 0; i < length; i++) { // make a loop for decryption
	// another answer could be: for (int i = 0; str[i] != '\0'; i++)
		str[i] = str[i] ^ key;
	}
}

int main(int argc, char** argv) {
	char* encrypted = argv[1];
	char key = *argv[2];

	char tempStr[100]; // feedback: This assumes that the user's input will never be longer than 100 characters. It is also not necessary and requires a deepcopy between two strings, which is also quite expensive.
	strcpy(tempStr, encrypted); // make a copy of the encrypted message
	decrypt(tempStr, key); // feedback: Just call decrypt(argv[1], argv[2][0]);


	printf(tempStr); // print the decrpyted message

	return 0;
}
