#pragma once
#include <string>
#include "Person.h"

namespace IDEA{

class Employee : public Person
{
public:
	Employee(void);
	Employee(const char*, const char*, int, const char*);
	virtual ~Employee(void);
private:
	std::string EmployeeID;
};

}

