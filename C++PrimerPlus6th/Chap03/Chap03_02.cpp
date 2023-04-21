/*
2023-4-21 13:52:03
*/
#include <iostream>

using namespace std;

int main() {

    const int FEET_TO_INCHS = 12;
    const double INCHS_TO_METER = 0.0254;
    const double POUND_TO_KG = 1.0 / 2.2;

    cout << "Enter your height(feet and inchs) and weight(pound), respectively:";
    int feet, inchs, pound;
    cin >> feet >> inchs >> pound;

    double meter = (feet * FEET_TO_INCHS + inchs) * INCHS_TO_METER;
    double kg = pound * POUND_TO_KG;

    cout << "Your BMI is " << kg / meter / meter << endl;

    return 0;
}