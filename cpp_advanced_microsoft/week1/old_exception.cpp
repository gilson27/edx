/**
 * \Author Gilson Varghese<gilsonvarghese7@gmail.com>
 * \Date 25 March 2018
 * \Brief Throwing exception basics style
 */
#include <iostream>
#include <string>

int main() {
	try{
		throw 6;
	}
	catch(int e) {
		std::cout << "In exception thrown" << std::to_string(e) << std::endl;
	}
	return 0;

}
