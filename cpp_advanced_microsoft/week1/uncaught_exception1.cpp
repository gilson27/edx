/**
 * \Author Gilson Varghese 
 * \Date   8 April 2018
 * \Brief  Using exception class to throw acustom exception
 */
#include <iostream>
using namespace std;

int main() {
	try {
		throw 20;
	}
	catch (int ex) {
		cout<<"Int exception" <<endl;
	}
	catch (double ex) {
		cout<< "Double Exception"<<endl;
	}
	catch(...) {
		cout<<"All other Exceptions"<<endl;
	}

  try {
    throw 20.0;
  }
  catch (int ex) {
    cout<<"Int exception" <<endl;
  }
  catch (double ex) {
    cout<< "Double Exception"<<endl;
  }
  catch(...) {
    cout<<"All other Exceptions"<<endl;
  }

	try {
    throw true;
  }
  catch (int ex) {
    cout<<"Int exception" <<endl;
  }
  catch (double ex) {
    cout<< "Double Exception"<<endl;
  }
  catch(...) {
    cout<<"All other Exceptions"<<endl;
  }
	return 0;
}
