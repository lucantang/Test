#include "iostream"
using namespace std;

class mystring{
public:
	mystring();
	~mystring();
	void test();

	inline unsigned int getSize(){return size;};

	void myOper();
private:
	char *data;
	unsigned int size;
};