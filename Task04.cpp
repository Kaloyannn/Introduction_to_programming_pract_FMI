#include <iostream>
using namespace std;

int main() {
    int totalseconds;

    cin >> totalseconds;

    int days = totalseconds / 86400;
    int remainingseconds = totalseconds % 86400;

    int hours = remainingseconds / 3600;
    remainingseconds %= 3600;

    int minutes = remainingseconds / 60;
    int seconds = remainingseconds % 60;

    cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;

    return 0;
}
