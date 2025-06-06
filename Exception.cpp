#include "exception.h"

Exception::Exception(){
	this->message = "ERROR";
}

Exception::Exception(string message){
	this->message = message;
}

Exception::~Exception(){
	this->message = message;
}

string Exception::getMessage(){
	return this-> message;
}

