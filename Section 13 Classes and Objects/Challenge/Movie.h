/******************************************************************
 * Section 13 Challenge
 * Movie.h
 * 
 * Models a Movie with the following atttributes
 * 
 * string name - the name of the movie 
 * string rating - G, PG, PG-13, R
 * int watched - the number of times you've watched the movie
 * ***************************************************************/
#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>
#include <vector>

using namespace std;

class Movie
{
private:
    string name;   // the name of the movie
    string rating;   // the movie rating G,PG, PG-13, R
    int watched;          // the number of times you've watched the movie
public:
    // Constructor - expects all 3 movie attributes
    Movie(string name, string rating, int watched);
    
    // Copy constructor 
    Movie(const Movie &source); 
    
    // Destructor
    ~Movie();
    
    // Basic getters and setters for private attributes
    // implement these inline and watch your const-correctness
    
    void set_name(string name) {this->name = name; }
    string get_name() const { return name; }
    
    void set_rating(string rating) {this->rating = rating; }
    string get_rating() const { return rating; }
    
    void set_watched(int watched) {this->watched = watched; }
    int get_watched() const { return watched; }
    
    // Simply increment the watched attribute by 1
    void increment_watched() { ++watched; }
    
    // simply displays the movie information ex.) Big, PG-13, 2
    void display() const;
};

#endif // _MOVIE_H_
