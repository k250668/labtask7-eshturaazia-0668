#include <stdio.h>
int main() {
int num[5] ; 
int i ;
	printf("Enter a number: ");
for ( i = 0 ; i<5;i++) {
	scanf("%d", &num[i]);
}
	printf("Reversed num is: ");
for ( i = 4; i>=0 ; i--) {
printf("%d ", num[i]);
}
	return 0;
}

