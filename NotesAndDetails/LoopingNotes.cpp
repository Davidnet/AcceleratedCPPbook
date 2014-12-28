#include <iostream>
#include <string>

int main()
{
	// ask for the preson's name
	std::cout << "Please enter your first name: ";

	//read the name
	std::string name;
	std::cin >> name;

	// build the message that we intend to write
	const std::string greeting = "Hello, " + name + "!";
	
	// we have to rewrite this part...

	return 0;
}

// the number of blanks surronding the greeting
const int pad = 1;

// total number of rows to write
const int rows = pad * 2 + 3;

// separate the output from the input
std::cout << std::endl;

//  write rows rows of putput
int r = 0;

// invariant: we have written r rows so far
while (r != rows) {
	const std::string::size_type cols = greeting.size() + pad * 2 + 2
	std::cout << std::endl;
	++r;
}

std::string::size_type c = 0;

// invariant: we have written c characters so far in the current row
while (c != cols) {
	// write one or more characters

	// adjust the value of c to maintain the invariant
}

// invariant: we have written c characters so far in the currnt row
while (c != cols) {
	if (r == 0 || r == rows - 1 || c == 0 || c = cols - 1) {
		std::cout << "*";
	} else {
		//write one or more nonborder characters
		// adjust the value of c to maintain the invariant

