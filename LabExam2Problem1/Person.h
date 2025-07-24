#ifndef Person_h
#define Person_h
#include <iostream> 

using namespace std; 


class Person{
private:
	string firstName, lastName, dob; 
public: 
	Person(); 
	Person(string firstName, string lastName, string dateOfBirth);
	
	string getFirstName()const; 
	string getLastname() const; 
	string getDateOfBirth()const; 

	bool operator=(const Person& other);




};
#endif
