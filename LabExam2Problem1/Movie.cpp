#include "Movie.h"
#include "Person.h" 
#include <iostream>

using namespace std; 



Movie::Movie() : title(""), director(), cast(), runtime(0) {

}
Movie::Movie(string title, Person director, vector<Person> cast, int runtime) {
    title = title; 
    director = director; 
    cast = cast; 
    runtime = runtime; 
}

string Movie::getTitle() const {
	return title; 
}
void Movie::setTitle(string newTitle) {
	title = newTitle;
}
int Movie::getRuntime()const {
    return runtime; 
}
bool Movie::isLongMovie(int min) {
	if (min > 135) {
		return true; 
	}
	return false; 
}
ostream& operator<<(ostream& stream, const Movie& other) {
    stream << "The director of this movie is " << other.title << endl <<
        "Title: " << other.director << endl << "The runtime is: " << other.runtime << " minutes "
        << endl << "Cast and crew: " << other.cast; 
    return stream; 

    //couldnt figure out how to put a for loop in here without errors to show them all at the end. 

}