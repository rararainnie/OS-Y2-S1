#include <stdio.h>
int main() {
    int num, sum, count;
    float avg = 0.0;
    num = sum = count = 0;
    
    while (1) {
    	printf("Enter positive integer: ");
	scanf("%d", &num);

	if (num <= 0){
		break;
	}
	
	sum += num;
	count++;
    }

    printf("Summation : %d\n", sum);
    printf("Average : %.2f\n", (float) sum / count);

    return 0;
}
