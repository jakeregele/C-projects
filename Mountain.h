//
// Created by jaker_000 on 9/12/2018.
//

#ifndef UNTITLED_MOUNTAIN_H
#define UNTITLED_MOUNTAIN_H
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


class Mountain {
private:
    string name, range;
    int rank, elevation, prominence;

public:
    Mountain();
    Mountain(string name, string range, int rank, int elevation, int prominence);

    const string &getName() const;

    void setName(const string &name);

    const string &getRange() const;

    void setRange(const string &range);

    int getRank() const;

    void setRank(int rank);

    int getElevation() const;

    void setElevation(int elevation);

    int getProminence() const;

    void setProminence(int prominence);

    int difference(Mountain m);


};

// Function declaration aka prototype
vector<Mountain> read_mountains_from_file(string filename);


#endif //UNTITLED_MOUNTAIN_H
