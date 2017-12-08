#pragma once
#include "Student.h"
#include "Researcher.h"

namespace IDEA{

class Graduate_student : public Student, public Researcher
{
public:
	Graduate_student(void);
	Graduate_student(const char*, const char*, int, unsigned int, 
		const char*, Program, const char*, unsigned int);
	virtual ~Graduate_student(void);
	virtual bool is_outstanding(void){return Student::is_outstanding() && Researcher::is_outstanding();}
	virtual void print_info(void);
};
}
