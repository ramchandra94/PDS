#include<stdio.h>

int main(){
	char firstname[11], lastname[11];
	scanf("%[^,]", firstname);
	scanf("%s*[^,]", lastname);
	printf("%s \n", firstname);
	printf("%s \n", lastname);
	return 0;
}
