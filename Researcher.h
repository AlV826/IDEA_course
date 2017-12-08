#pragma once
#include <string>

namespace IDEA{

class Researcher
{
public:
	Researcher(void);
	Researcher(const char*, unsigned int);
	virtual ~Researcher(void);
	virtual bool is_outstanding(void) { return num_publication > 10; };
	void print_info(void);
private:
	unsigned int num_publication;
	std::string research_field;
};

}
