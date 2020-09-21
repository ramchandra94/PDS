#include<stdio.h>

void main() {
	char sample[100];
	scanf("%s[^\n]", sample);
	printf("%s \n", sample);
}
