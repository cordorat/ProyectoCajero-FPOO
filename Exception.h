#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <string>
using namespace std;

class Exception
{
	public:
		Exception();
		Exception(string message);
		~Exception();
		string getMessage();
	private:
		string message;
};

#endif

