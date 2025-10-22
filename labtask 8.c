#include <stdio.h>
int main() {
	char random[100];
	int i;
	printf("Enter random letters/charcters/numbers");
	scanf(" %[^A-Za-z]", random);
  printf("Non-alphabetic characters are: %s\n", random);
	
	return 0;
}
