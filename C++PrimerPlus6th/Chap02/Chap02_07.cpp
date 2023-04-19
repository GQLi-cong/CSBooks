/*
2023年4月19日14:43:37
*/
#include <iostream>

using namespace std;

void my_print(int hour, int minute) {
    cout << "Enter the number of hours: " << hour << endl;
    cout << "Enter the number of minutes: " << minute << endl;
    cout << "Time: " << hour << ":" << minute << endl;
}

int main() {

    int hour, minute;
    cin >> hour >> minute;
    
    my_print(hour, minute);

    return 0;
}