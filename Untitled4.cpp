#include <stdio.h>
int main() {
	int array[10];
	int i;
	int f;

	for (i = 0;i<10;i++) {
			printf("Enter your input: ");
	scanf("%d", &array[i]); 
		}
	 for ( i =0; i < 10 ; i++ ) {
	 if (array[i] == array[i+1]) {
	 	array[i+1] = -1;
	 }

	 }
	 for ( i = 0;i<10;i++){
	 	printf("%d", array[i]);
	 }
	return 0;
}
