#include <stdio.h>
int main() {
	char word[100];
	int vowels = 0;
	int constant = 0;
	int i;
	printf("Enter a word: ");
	scanf("%s", word);
	for (i = 0 ; word[i] != '\0' ; i++) {
		if (word[i] == 'a' || word[i] == 'A'||
		    word[i] == 'e' || word[i] == 'E' ||
			word[i] == 'I' || word[i] == 'i'||
			word[i] == 'o' || word[i] == 'O'||
			word[i] == 'u' || word[i] == 'U'){
				vowels++;
			}
			else {
				constant++;
			}
	}
	printf("Vowels = %d \n", vowels);
	printf("Constants = %d", constant);
	return 0;
}
