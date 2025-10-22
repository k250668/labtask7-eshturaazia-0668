#include <stdio.h>
int main() {
	int num[10];
	int i;
	for (i = 0 ; i<10;i++) {
		printf("Enter number %d: ", i+1);
		scanf("%d", &num[i]);
	}
	int max = num[0];
	int min  = num[0];
	for (i = 0 ; i<10;i++) {
		if (num[i]> max) {
			max = num[i];
		}
		if (num[i] < min) {
			min = num[i];
		}
	}
	int diff = max - min;
		printf("The 10 numbers are : ");
	for (i = 0 ; i<10;i++){
			printf("%d ", num[i]);
	}
	printf("\n");

	printf("Differnce between Largest and smallest number is: %d", diff);
}
