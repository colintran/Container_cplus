//============================================================================
// Name        : HelloWorld.cpp
// Author      : Cuong TRAN
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int arr1[] = {1,3,4,5,6};

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	std::cout <<"The given array has: "<<sizeof(arr1)/sizeof(arr1[0])<<" element(s)"<<std::endl;

	std::cout <<"Number of input(s) are "<<argc<<std::endl;

	for(int i=0; i<argc; ++i){
		std::cout<<"ith parameter: "<<argv[i]<<std::endl;
	}

	return 0;
}
