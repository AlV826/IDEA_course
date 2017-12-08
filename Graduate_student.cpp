#include "Graduate_student.h"

namespace IDEA{

Graduate_student::Graduate_student(void)
: Student(), Researcher()
{
}

Graduate_student::Graduate_student(const char *first, const char *last,
		int birth, unsigned int id, const char *m, Program p, 
		const char *research, unsigned int numPub)
:	Student(first, last, birth, id, m, p), Researcher(research, numPub)
{
}

Graduate_student::~Graduate_student(void)
{
}

void Graduate_student::print_info(void)
{
	Student::print_info();
	Researcher::print_info();
}

}
