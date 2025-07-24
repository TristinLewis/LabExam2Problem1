#include <iostream> 
#include "Person.h"
#include "Movie.h"
#include <vector> 


using namespace std; 


int main() {

    Person director("Christopher", "Nolan", "1954, 12, 17");
    Person actor1("Woody", "harrelson", "1952, 10, 19");
    Person actor2("Jack", "Nicholson", "1944, 9, 13");
    Person actor3("Tom", "Holland", "2000, 3, 4");

    vector<Person> cast = { actor1, actor2, actor3 }; 

    Movie movie("Action drama", director, cast, 136); 

    cout << movie << endl; 

    if (Movie::isLongMovie(movie.getRuntime())) {

        cout << "This is a long movie"; 
    }
	return 0; 
}
