#ifndef Movie_h
#define Movie_h 
#include "Person.h"
#include <iostream> 
#include <vector> 

using namespace std; 

class Movie {
private:
	string title;
	Person director;
	vector <Person> cast;
	int runtime;


public:
	Movie();
	Movie(string title, Person director, vector<Person> cast, int runtime);

	string getTitle() const;
	void setTitle(string title);
	int getRuntime()const;

	static bool isLongMovie(int min);

	friend ostream& operator<<(ostream& stream, const Movie& other);
};
#endif
