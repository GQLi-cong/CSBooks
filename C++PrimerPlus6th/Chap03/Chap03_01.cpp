/*
2023-4-21 13:44:22
*/
#include <iostream>

using namespace std;

int main() {

    const int FACTOR = 12;

    cout << "Enter your height(inch): ";
    int inch;
    cin >> inch;
    cout << "Your height is " << inch / FACTOR << " feet " << inch % FACTOR << " inchs" << endl; 

    return 0;
}