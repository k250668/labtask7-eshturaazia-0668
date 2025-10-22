#include <stdio.h> 
int main() {
	char array[1000];
	int i;
	printf("Enter a word: ");
	scanf("%[^\n]", array);
	for (i=0; array[i]!='\0'; i++) {
		if (array[i]>= 'a' && array[i] <= 'z') {
			array[i] = array[i] - 32;
		}
		else if (array[i]>= 'A' && array[i] <= 'Z') {
				array[i] = array[i] + 32;
		}
	}
	printf("Updated:%s",array);
	return 0;
}
