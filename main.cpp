#include "Mountain.h"

int main(){
    // Create mountain vector and fill with mountain objects from the csv file
    vector<Mountain> mountains;
    mountains = read_mountains_from_file("Mountains.csv");
    int total_elevation;

    for (auto m : mountains) {
        cout << m.getName() << endl;
    }

    // calculate total elevation
    for (auto m : mountains) {
        total_elevation += m.getElevation();
    }

    // print results from calculations
    cout << "Total Elevation: " <<  total_elevation << endl;
    cout << "Average Elevation: " << total_elevation / mountains.size() << endl;
    cout << "Mountain Objects: " << mountains.size();





    return 0;

}
