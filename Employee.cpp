#include "Employee.h"

namespace IDEA{
using namespace std;

Employee::Employee(void)
: Person(), EmployeeID(string(""))
{
}

Employee::Employee(const char *first, const char *last, int birth, const char *ID)
: Person(first, last, birth), EmployeeID(string(ID))
{
}

Employee::~Employee(void)
{
}

}

