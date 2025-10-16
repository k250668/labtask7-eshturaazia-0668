#include <stdio.h>
int main() {
	int array[10];
	int i;
	int f;
int freq[100] = {0};
	for (i = 0;i<10;i++) {
			printf("Enter your input: ");
	scanf("%d", &array[i]); 
		}
		for ( i =0;i<10;i++) {
			if ( freq[array[i]] == 0) {
			freq[array[i]] = 1;
			}
			else {
				array[i] = -1;
			}
		}
	printf("Updated list") ;
	for ( i =0 ; i<10;i++) {
		printf("%d ", array[i]);
	}
	return 0;
}
