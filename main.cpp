
/**
 * You don't have to modify this source file, but can if you want.
 * This will not be used for grading, so you can use it to debug your
 * vector class.
 * This is the program that runs with "make run"
 */

///	Your welcome
#include <iostream>
#include "MyVector.hpp"

///	Your welcome
using std::cout, std::endl;

//
int main()
{
	//
	cout << "Hello! Maybe use this source file for debugging?" << endl;
	MyVector<int> other(3);

	cout<< other.size() << other.capacity() << other.empty() << endl;
	
	other.push_back(2);
	other.push_back(3);
	other.push_back(4);
	
	cout<< other.size() << other.capacity() << other.empty() << endl;
	
	other.insert(0,1);
	other.insert(0,1);
	other.insert(0,1);
	
	cout<< other.size() << other.capacity() << other.empty() << endl;
	cout<<endl;
	
	other.pop_back();
		cout<< other.size() << other.capacity() << other.empty() << endl;
	other.pop_back();
		cout<< other.size() << other.capacity() << other.empty() << endl;
	other.pop_back();
			cout<< other.size() << other.capacity() << other.empty() << endl;
	other.pop_back();
		cout<< other.size() << other.capacity() << other.empty() << endl;
	other.pop_back();
		cout<< other.size() << other.capacity() << other.empty() << endl;
	other.erase(0);
		cout<< other.size() << other.capacity() << other.empty() << endl;
		cout<<endl;
	
    cout<< other.size() << other.capacity() << other.empty() << endl;
    
    other.insert(0, 1);
	other.insert(0, 1);
	other.insert(0, 1);
	other.insert(0, 1);
	other.insert(0, 1);
	other.insert(0, 1);
	other.insert(0, 1);
	other.insert(0, 1);
	other.insert(0, 1);
	other.insert(0, 1);
	
	cout<< other.size() << other.capacity() << other.empty() << endl;
	
	return 0;
}


