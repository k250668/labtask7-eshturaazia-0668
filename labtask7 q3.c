#include <stdio.h>

int main() {
    int pass[10], fail[10];
    int p = 0, f = 0;
    int i, mark;
    int passsum = 0, failsum = 0;
	float passavg = 0;
	float failavg = 0;

    for (i = 0; i < 10; i++) {
        printf("Enter marks (0-10): ");
        scanf("%d", &mark);

        if (mark >= 6 && mark <= 10) {
            pass[p] = mark;
            p++;
            passsum += mark;
        } 
        else if (mark >= 0 && mark <= 5) {  fail[f] = mark;
            f++;
            failsum += mark;
        } 
    }
	printf("\nPass marks are: ");
    for (i = 0; i < p; i++) {
        printf("%d ", pass[i]);
    }

   passavg = (float)passsum / p;
	 printf("\nAverage of pass marks: %.2f\n", passavg);

    printf("\nFail marks are: ");
    for (i = 0; i < f; i++) {
        printf("%d ", fail[i]);
    }
	failavg = (float)failsum / f; 
	printf("\nAverage of fail marks: %.2f\n", failavg);
	

	
return 0;
}
 
