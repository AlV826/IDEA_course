#pragma once
#include <string>

namespace IDEA{ // defining a namespace

class Person
{
public:
	Person(void); // default constructor
	Person(const char*, const char*, int); // constructor with input arguments
	virtual ~Person(void); // destructor
	int year_born(void) {return DOB;} // inline method
	virtual void print_info(void); // virtual method to be overloaded in derived classes
private:
	std::string first_name;
	std::string last_name;
	int DOB;	
};

}

