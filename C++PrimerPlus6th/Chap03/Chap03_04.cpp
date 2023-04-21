/*
2023-4-21 14:25:18
*/
#include <iostream>

using namespace std;

int main() {

    const int SECOND_TO_MINUTE = 60;
    const int MINUTE_TO_HOUR = 60;
    const int HOUR_TO_DAY = 24;

    cout << "Enter the number of seconds: ";
    long seconds;
    cin >> seconds;
    cout << seconds << " seconds = ";
    long days = seconds / (SECOND_TO_MINUTE * MINUTE_TO_HOUR * HOUR_TO_DAY);
    seconds = seconds % (SECOND_TO_MINUTE * MINUTE_TO_HOUR * HOUR_TO_DAY);
    long hours = seconds / (SECOND_TO_MINUTE * MINUTE_TO_HOUR);
    seconds = seconds % (SECOND_TO_MINUTE * MINUTE_TO_HOUR);
    long minutes = seconds / SECOND_TO_MINUTE;
    seconds = seconds % SECOND_TO_MINUTE;
    cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;

    return 0;
}