#include<iostream>

int main(){
	char sample[10];
	std::cin.getline(sample, 10, 'e');
	std::cout << "checking data in sample " << sample << std::endl;

	return 0;
}
