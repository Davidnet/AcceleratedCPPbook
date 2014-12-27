#include <iostream>
#include <string>

int main(){
	// ask for the person name
	std::cout << "Please enter your first name: ";

	// read the name
	std::string name;	//defined name
	std::cin >> name;

	// write a greeting
	std::cout << "Hello, " << name << "!" << std::endl;
	return 0;
}