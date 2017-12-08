#pragma once
#include <string>
#include "Employee.h"
#include "Researcher.h"

namespace IDEA{

class Faculty : public Employee, public Researcher
{
public:
	Faculty(void);
	Faculty(const char*, const char*, 
		int, const char*, 
		const char*, unsigned int, const char*);
	virtual ~Faculty(void);

	virtual void print_info(void);
private:
	std::string affiliation;
};

}

