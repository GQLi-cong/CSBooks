/*
2023-4-21 14:39:13
*/
#include <iostream>

using namespace std;

int main() {

    long long total_popu, us_popu;
    cout << "Enter the world's population: ";
    cin >> total_popu;
    cout << "Enter the population of the US: ";
    cin >> us_popu;
    cout << "The population of the US is " << 100.0 * us_popu / total_popu << "\% of the world population.";

    return 0;
}