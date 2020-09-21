#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct my_obj {
	int age;
	float salary;
	char name[30];
} my_obj_instance;

void print_obj(struct my_obj obj){

	printf("Age is %d \n", obj.age);
	
	printf("Salary is %f \n", obj.salary);

        printf("Name is %s \n", obj.name);
}

void main(){
		
		
	char temp[30] = "Ram Chandra";
	int i = 0;
	for(; temp[i] != '\0'; i++){
		my_obj_instance.name[i] = temp[i];
	}
	my_obj_instance.name[i] = '\0';

	my_obj_instance.salary = 56.567;

	my_obj_instance.age = 25;

	struct my_obj my_new_obj_inst;

	my_new_obj_inst = my_obj_instance;
	print_obj(my_obj_instance);
	print_obj(my_new_obj_inst);




}

