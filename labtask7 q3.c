#include <stdio.h> 
int main() {int p=0;
	int f=0;
	int pass[p];
	int fail[f];
	int i;
	int mark;
	int passum = 0;
	int failsum = 0;
	for ( i =0 ; i<10 ; i++){
		printf("Enter marks (0-10): ");
		scanf("%d",&mark);
		if (mark > 5 && mark<10) {
			pass[p] = mark;
			p++;
			passum = passum + mark;
		}
		else if (mark <= 5 && mark>=0) {
			fail[f] = mark;
			f++;
		     failsum = failsum + mark;
		}
	}
	printf("Pass marks are: ");
	for ( i = 0 ; i<p;i++) {
		printf("%d", pass[i]);
	}
	int passaverage = 0;
	passaverage = passum/p;

	printf("Average of pass marks is : %d ", passaverage);
	printf("fail marks: \n");
	for ( i = 0 ; i<f;i++) {
			printf("%d", fail[i]);
	}
		int failaverage = 0;
	failaverage = failsum/f;
		printf("Average of fail marks is : %d  ", failaverage);
	
return 0;
}
