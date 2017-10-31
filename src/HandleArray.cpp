/*
 * HandleArray.cpp
 *
 *  Created on: Oct 30, 2017
 *      Author: cuongtd4
 */
#include "HandleArray.h"
#include <iostream>
#include <vector>

HandleArray::HandleArray(int iArr[], unsigned int size){
	this->_Array = iArr;
	this->_No = size;
}

void HandleArray::Sort(){
	std::vector<int> aList;
	aList = std::vector<int>(_Array, _Array + _No);
	std::cout<<"Number of elements: "<<aList.size()<<std::endl;
}
