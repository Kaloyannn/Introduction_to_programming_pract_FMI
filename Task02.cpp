#include <iostream>
using namespace std;

int main() {
    //v kelvini i farenhait
    double celsius;
    cin >> celsius;

    double kelvin = celsius + 273.15;

    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    cout << "Kelvin " << kelvin << endl;
    cout << "Fahrenheit " << fahrenheit << endl;

    return 0;
}
