/*
2023-4-21 14:45:17
*/
#include <iostream>

using namespace std;

int main() {

    cout << "Enter kilometers and oil consumption: ";
    int km, l;
    cin >> km >> l;
    cout << "Oil consumption per 100km is " << 100.0 * l / km << endl;

    return 0;
}