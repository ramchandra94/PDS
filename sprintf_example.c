#include<stdio.h>
int main(){
	char name[100];
	sprintf(name, "%s, %s", "world", "hello");
	printf("%s \n", name);
	return 0;
}
