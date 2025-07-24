#include "Person.h"
#include <iostream> 
#include <string> 
 
using namespace std;


Person::Person() : firstName(""), lastName(""), dob(0) {

}
Person::Person(string firstName, string lastName, string dateOfBirth) {
    firstName = firstName; 
    lastName = lastName; 
    dob = dateOfBirth; 

}

string Person::getFirstName()const {
	return firstName;
}
string Person::getLastname() const {
	return lastName; 
}
string Person::getDateOfBirth()const {
	return dob; 
}

bool Person::operator=(const Person& other) {
    if (this != &other) {
        firstName = other.firstName; 
        lastName = other.lastName; 
        dob = other.dob; 
    }
    return this; 
}

