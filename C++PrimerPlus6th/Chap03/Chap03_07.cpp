/*
2023-4-21 14:59:31
*/
#include <iostream>

using namespace std;

int main() {

    const double KM_TO_MILE = 0.6214;
    const double L_TO_GALLON = 1.0 / 3.785;
    cout << "Enter oil consumption per 100 kilometers: ";
    double x;
    cin >> x;
    cout << "Oil consumtion in mpg is " << (100 * KM_TO_MILE) / (x * L_TO_GALLON);

    return 0;
}