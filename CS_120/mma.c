//Harry Do

#include <stdio.h>


int main(){
	int n;
	float x;
	float max=0;
	float min=1000;
	float compared_value;
	float average;
	float sum=0;
	printf("How many number are you about to enter?:  \n");
	scanf("%d", &n);
	printf("The number is: %d\n",n);
	float  arrays[n];
	printf("Please enter your number: ");
	for (int i=0; i<n;i++){
		scanf("%f", &x);
		arrays[i]= x;
		printf("%f\n", arrays[i]);
	}
	for (int i=0; i<n; i++){
		if (arrays[i]<min)
			min=arrays[i];
		else
			min=min;
	}
	for (int i=0;i<n;i++){
		if (arrays[i]> max)
			max = arrays[i];
		else
			max = max;
	}
	for (int i=0; i<n; i++){
		sum =sum + arrays[i];
	}
	average = sum/n;
	printf("%f\n", sum);
	printf("Minimum is %f\n", min);
/bin/bash: line 1: wq: command not found
}

