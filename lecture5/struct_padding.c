#include<stdio.h>
#include<stdlib.h>

int main(){

	struct A {
		int x; // this is of size 4 bytes

		double z; // this is of 8 bytes i.e. larger than the previous one.
			  // so padding of 4 bytes is added between x and z
		
		short int y; // size of the short int is 2. 
			     // so to align with the double above padding is done of 6 bytes.
	
	};


	struct B {
		int x;

		int y;

		int z;
	};


	struct C {
		double a;

		int b;

		int c;
	};
	
	printf("size of struct A, B & C are %ld, %ld & %ld respectively \n", sizeof(struct A), sizeof(struct B), sizeof(struct C));

}
