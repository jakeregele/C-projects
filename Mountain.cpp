//
// Created by jaker_000 on 9/12/2018.
//

#include "Mountain.h"

/* Mountain Class with default and conditional constructors
 * and setters / getters for all relevant values
 */

// default constructor
Mountain::Mountain() {
    name = "null";
    range = "null";
    rank = 0;
    elevation = 0;
    prominence = 0;
}

// Conditional constructor
Mountain::Mountain(string name, string range, int rank, int elevation, int prominence) {
    this->name = name;
    this->range = range;
    this->rank = rank;
    this->elevation = elevation;
    this->prominence = prominence;
}

//Setters and getters
const string &Mountain::getName() const {
    return name;
}

void Mountain::setName(const string &name) {
    Mountain::name = name;
}

const string &Mountain::getRange() const {
    return range;
}

void Mountain::setRange(const string &range) {
    Mountain::range = range;
}

int Mountain::getRank() const {
    return rank;
}

void Mountain::setRank(int rank) {
    Mountain::rank = rank;
}

int Mountain::getElevation() const {
    return elevation;
}

void Mountain::setElevation(int elevation) {
    Mountain::elevation = elevation;
}

int Mountain::getProminence() const {
    return prominence;
}

void Mountain::setProminence(int prominence) {
    Mountain::prominence = prominence;
}


/* Returns the elevation difference between two mountain objects
using the object that calls the method and another passed mountain object */
int Mountain::difference(Mountain m) {
    return abs(elevation - m.getElevation());
}


/*Function to read from a csv file, create mountain objects and
  return a vector containing them*/

vector<Mountain> read_mountains_from_file(string filename){
    vector<Mountain> out;
    ifstream f_in;
    f_in.open(filename);
    int rank = 0, elevation = 0, prominence = 0;
    char comma;
    string name = "", range = "";

    while (f_in && f_in.peek() != EOF) {
        f_in >> rank;
        f_in >> comma;
        f_in >> elevation;
        f_in >> comma;
        f_in >> prominence;
        f_in >> comma;
        getline(f_in, name, ',');
        getline(f_in, range);

        out.push_back(Mountain(name, range, rank, elevation, prominence));

    }

    return out;
}


