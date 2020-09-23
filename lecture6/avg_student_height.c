#include<stdio.h>
#include<stdlib.h>

int main(){
	unsigned int n; // to store number of students

	float sum=0, average;// to store sum and average of heights of students.

	printf("Enter number of students:");
	scanf("%d",&n);

	float *heights_arr = (float *)malloc(n * sizeof(float));
	
	if(heights_arr == NULL){
		printf("Could not allocate continuous memory of %ld bytes \n", sizeof(float)*n);
		exit(1);
	}

	printf("created memory to store student heights \n");
	int i;
	for(i=0; i < n; i++){
		printf("Enter the height of student %d: ", i+1);
		scanf("%f", &heights_arr[i]);
	}

	for(i=0; i< n; i++){
		sum = sum + heights_arr[i];
	}

	average = sum/(float)n;

	printf("Average height of student is %f \n", average);

	free(heights_arr);

	return 0;

}
		

