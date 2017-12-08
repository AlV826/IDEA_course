#include <iostream>
#include "Researcher.h"

namespace IDEA{
using namespace std;

Researcher::Researcher(void)
: research_field(string("")), num_publication(0)
{
}

Researcher::Researcher(const char *research, unsigned int numPub)
: research_field(string(research)), num_publication(numPub)
{
}

Researcher::~Researcher(void)
{
}

void Researcher::print_info(void)
{
	cout << "Area of research: " << research_field << endl;
	cout << "Total number of publications: " << num_publication << endl;
}

}
