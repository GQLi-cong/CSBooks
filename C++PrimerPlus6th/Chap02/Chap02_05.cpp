/*
2023年4月19日14:32:14
*/
#include <iostream>

using namespace std;

double Celsius2Fahrenheit(double celsius) {
    return 1.8 * celsius + 32.0;
}

int main() {

    cout << "Please enter a Celsius value: ";
    double celsius;
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << Celsius2Fahrenheit(celsius) << " degrees Fahrenheit" << endl;

    return 0; 
}