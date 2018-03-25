/**
 * \Author Gilson Varghese 
 * \Date   25 March 2018
 * \Brief  Using exception class to throw acustom exception
 */
#include <iostream>
#include <exception>
using namespace std;

class derivedexception : public exception {
	virtual const char* what() const throw() {
		return "My derived test exception";
	}
} myderivedexception;


int main() {
	try {
		throw myderivedexception;
	}
	catch (exception& e) {
		cout << e.what() << "\n";
	}
	return 0;
} 
