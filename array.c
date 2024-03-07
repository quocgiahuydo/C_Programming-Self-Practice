#include <stdio.h>


float getMean(int *arr, int len){
	int i;
	float mean , total = 0;
	
	for (i=0; i < len; i++)
		total += arr[i];
	mean = total/len;
	return mean;
}

int main(void){
	int data[4]={78,44,99,27};
	float avg;
	avg = getMean(data, 4);
	printf("The average value is: %f. \n", avg);
}
