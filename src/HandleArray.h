/*
 * HandleArray.h
 *
 *  Created on: Oct 30, 2017
 *      Author: cuongtd4
 */

#ifndef HANDLEARRAY_H_
#define HANDLEARRAY_H_

class HandleArray{
private:
	int *_Array;
	unsigned int _No;
public:
	HandleArray(int iArr[], unsigned int size);
	void Sort();
};

#endif /* HANDLEARRAY_H_ */
