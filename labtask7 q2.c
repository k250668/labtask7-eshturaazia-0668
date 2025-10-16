#include <stdio.h> 
int main() {
	int num[10];
	int i;
	int n;
	int count = 0;
	for ( i = 0 ; i < 10 ; i++) {
		printf("Enter number: ");
		scanf("%d", &num[i]);
	}
	printf("What number do you want to find: ");
	scanf("%d", &n);
    for (i = 0 ; i <10 ; i++) {
    	if(num[i] == n) {
    		count++;
		}
		
	}
	if ( count == 0) {
			printf("Number not found\n");
		
	}
	printf("Number occured %d times", count);
	return 0;
}
