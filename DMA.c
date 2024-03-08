#include <stdio.h>
#include <stdlib.h>

float getMean(int *arr, int len){
	int i;
	float mean , total = 0;
	
	for (i=0; i < len; i++)
		total += arr[i];
	mean = total/len;
	return mean;
}

int main(void){ 
    int len, i;
    int *nums;
    printf("How many numbers would you like to enter? "); 
    scanf("%d", &len);
    nums = malloc(len*sizeof(int));
    if (nums == NULL) printf("ERROR: out of memory.\n"); 
    else {
        for (i=0; i<len; i++) { 
            printf("Enter number: "); 
            scanf("%d", &nums[i]);
    }
    printf("The average is %f\n", getMean(nums, len)); }
    free(nums); }
