#include <iostream>
#include "Person.h"

namespace IDEA{
using namespace std;

Person::Person(void)
: first_name(string("")), last_name(string("")), DOB(1900) // initializer list
{
}

Person::Person(const char *first, const char *last, int year)
:	first_name(string(first)), last_name(string(last)), DOB(year)
{
}

Person::~Person(void)
{
}

void Person::print_info(void)
{
	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Date of Birth: " << DOB << endl;
}

}

