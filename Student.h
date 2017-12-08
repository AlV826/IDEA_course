#pragma once
#include <string>
#include "Person.h"

namespace IDEA{

class Student : public Person
{	
public:
	enum Program{BSC, MSC, PhD, MD};
	Student(void);
	Student(const char*, const char*, int, unsigned int, const char*, Program);
	virtual ~Student(void);
	virtual void print_info(void);
	void set_gpa(double x){ GPA = x;}
	virtual bool is_outstanding(void);
private:
	unsigned int ID;
	std::string major;
	Program degree;
	double GPA;
};

}

