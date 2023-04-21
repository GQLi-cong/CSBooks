/*
2023-4-21 14:14:09
*/
#include <iostream>

using namespace std;

int main() {

    const double SECOND_TO_MINUTE = 1.0 / 60;
    const double MINUTE_TO_DEGREE = 1.0 / 60;

    int degrees, minutes, seconds;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: "; 
    cin >> seconds;
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " 
    << (seconds * SECOND_TO_MINUTE + minutes) * MINUTE_TO_DEGREE + degrees << " degrees" << endl;  

    return 0;
}