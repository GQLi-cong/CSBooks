/*
2023年4月19日14:36:32
*/
#include <iostream>

using namespace std;

double light_year2astron_unit(double light_year) {
    return light_year * 63240; 
}

int main() {

    cout << "Enter the number of light years: ";
    double light_year;
    cin >> light_year;
    cout << light_year << " light years = " << light_year2astron_unit(light_year) << " astronomical units." << endl; 

    return 0;
}