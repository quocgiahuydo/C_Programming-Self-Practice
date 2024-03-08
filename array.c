#include <stdio.h>


float getMean(int *arr, int len){
	int i;
	float mean , total = 0;
	
	for (i=0; i < len; i++)
		total += arr[i];
	mean = total/len;
	return mean;
}
int findLen(int *Arr){
	int len ;
	len = sizeof(*Arr)/sizeof(Arr[0]);
	return len;
}
int main(void){
	int len;
	int data[]={78,44,99,2};
	len = sizeof(data)/sizeof(data[0]);
	//len = findLen(data);
	printf("The length is: %d\n", len);
	float avg;
	avg = getMean(data, len);
	printf("The average value is: %f. \n", avg);
}