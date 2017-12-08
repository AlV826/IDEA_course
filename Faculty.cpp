#include <iostream>
#include "Faculty.h"

namespace IDEA{

using namespace std;

Faculty::Faculty(void)
: Employee(), Researcher(), affiliation(string(""))
{
}

Faculty::Faculty(const char *first, const char *last, 
				 int birth, const char *ID, 
				 const char *Research, unsigned int numPub,
				 const char *aff)
:	Employee(first, last, birth, ID), Researcher(Research, numPub), affiliation(aff)
{
}

Faculty::~Faculty(void)
{
}

void Faculty::print_info(void)
{
	Employee::print_info();
	Researcher::print_info();
	cout << "Affiliation: " << affiliation << endl;
}
}
