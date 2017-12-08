/*

Example for demonstration in IDEA mini course
AV 2017

*/

#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Researcher.h"
#include "Faculty.h"
#include "Graduate_student.h"

using namespace std;

int get_age(IDEA::Person &p){ // function that can work on differnt types derived from Person data type
	return 2017 - p.year_born();
}

int main()
{
	IDEA::Person p1("John", "Jackson", 1990); // Person type initialization 
	p1.print_info();
	cout << endl << endl;

	IDEA::Student S1("cccc", "ddddd", 2000, 123, "Radiology", IDEA::Student::Program::PhD); // Student type initialization
	S1.set_gpa(3.9);
	S1.print_info();
	if(S1.is_outstanding())
		cout << "Top student\n";
	cout << endl << endl;

	IDEA::Researcher R1("MRI", 10); // Researcher type initialization
	R1.print_info();
	cout << endl << endl;

	IDEA::Faculty professor("xxx", "yyy", 1970, "xyz123", "MRI", 12, "University"); // Faculty type initialization
	professor.print_info();
	if(professor.is_outstanding())
		cout <<"Outstanding Researcher!\n";
	cout << endl << endl;

	IDEA::Student *p2 = new IDEA::Graduate_student("aaa", "bbb", 1985, 123, 
		"Radiology", IDEA::Student::Program::PhD, "MRI", 5); // memory allocation and initialization of Graduate_student object
	p2->set_gpa(3.8);
	p2->print_info();
	if(p2->is_outstanding())
		cout << "Top student!\n";
	else
		cout << "Not a top student\n";
	cout << endl << endl;

	IDEA::Person *people[2]; // groupling Student and Faculty objects in an array
	people[0] = new IDEA::Student;
	people[1] = new IDEA::Faculty;
	for(int i=0; i<2; i++){
		cout << "People[" << i <<"] = " << endl;
		people[i]->print_info();
		cout << endl << endl;
	}
	
	// applying the same function on objects from different data types
	cout << "Person age: " << get_age(p1) << endl; // passing an object from Person type
	cout << "Student age: " << get_age(S1) << endl; // passing an object from Student type
	cout << "Professor age: " << get_age(professor) << endl; // passing an object from faculty type
	cout << "Graduate student age: " << get_age(*p2) << endl; // passing an object from graduate student type
	cout << endl << endl;

	// memory deallocation
	delete p2; 
	for(int i=0; i<2; i++)
		delete people[i];

	return 0;
}