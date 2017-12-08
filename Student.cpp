#include <string>
#include <iostream>
#include "Student.h"

namespace IDEA{

using namespace std;

Student::Student(void)
:	Person(), ID(0), major(string("")), degree(Program::BSC), GPA(0)
{
}

Student::Student(const char *first, const char *last, 
				 int birth, unsigned int id,
				 const char *m, Program d)
:	Person(first, last, birth), ID(id), major(m), degree(d)
{
}

Student::~Student(void)
{
}

void Student::print_info(void)
{
	Person::print_info();
	cout << "Student ID: " << ID << endl;
	cout << "Major: " << major << endl;
	string d = "";
	switch (degree){
		case Program::BSC:
			d = string("BSc");
			break;
		case Program::MSC:
			d = string("MSc");
			break;
		case Program::PhD:
			d = string("PhD");
			break;
		case Program::MD:
			d = string("MD");
	}
	cout << "Degree: " << d << endl;
}

bool Student::is_outstanding(void)
{
	return GPA > 3.5;
}

}
