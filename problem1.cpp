#include <iostream>

using namespace std;

int toMinutes(int h, int m) {
    return h * 60 + m;
}

int convertTime(int current, int correct) {
    int diff = correct - current;
    int ops = 0;

    ops += diff / 60;
    diff %= 60;

    ops += diff / 15;
    diff %= 15;

    ops += diff / 5;
    diff %= 5;

    ops += diff;

    return ops;
}

int main() {
    int curr_h, curr_m, corr_h, corr_m;
    char colon;

    if (!(cin >> curr_h >> colon >> curr_m)) return 0;

    cin >> corr_h >> colon >> corr_m;

    int current_minutes = toMinutes(curr_h, curr_m);
    int correct_minutes = toMinutes(corr_h, corr_m);

    cout << convertTime(current_minutes, correct_minutes) << endl;

    return 0;
}
