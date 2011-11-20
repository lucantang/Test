#include "mystring.h"

mystring::mystring(){
	data = new char[3];
	size = 1;
}

mystring::~mystring()
{	
	delete []data;
	data = NULL;
}

void mystring::test()
{
	delete this; // let data point to bad ptr, let size source released
}