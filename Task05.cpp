#include <iostream>
using namespace std;

int main() {
    int firstnumber, secondnumber;

    cin >> firstnumber;

    cin >> secondnumber;

    if (firstnumber % secondnumber == 0) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }

    return 0;
}
