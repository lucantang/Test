#include <iostream>
#include "mystring.h"
using namespace std;

void main()
{
	//////////////////////////////////////////////////////////////////////////class pointer on stack, it's resource on heap
	// ok! because the deleted this pointer point to heap , after delete , the address(in stack) remains
	mystring *strDataOnHeap = new mystring();

	strDataOnHeap->test(); // delete this in the function. (this = strDataOnHeap) 1. ~mystring() do some releas resource 2. set member to wild
	// delete strDataOnHeap;

	strDataOnHeap = NULL; // it's important to set this mild pointer to NULL, to prevent it go on using class function
	//strDataOnHeap->getSize(); // if "strDataOnHeap = NULL;" didn't write, it's allowable to call getSize() ; dangerous!!!!!


	//////////////////////////////////////////////////////////////////////////class all on stack ???
	// wrong! because the deleted this pointer point to stack
	//mystring strDataOnStack;
	//strDataOnStack.test(); // delete this in the function. (this = &strDataOnStack)


	// ok! because the deleted this pointer point to heap , after delete , the address(in stack) remains	
	char *test = new char[5];
	delete []test;
	test = NULL;
	//test[3] = 'h'; // if "test = NULL;" didn't write, it's allowable to set test[3] = 'h'; dangerous!!!!!

	// wrong! because the deleted this pointer point to stack
	//char test1 = 'h';
	//delete &test1;
}