#include <iostream>
using namespace std;

void printRepeat(char c, int times) {
    while (times--) {
        cout << c;
    }
}

int main() {
    int n, k;

    if (cin >> n >> k) {
        int extra = k - n;
        int z_count = extra / 25;
        int mid_val = extra % 25;

        int a_count = n - z_count;
        if (mid_val > 0) {
            a_count--;
        }

        printRepeat('a', a_count);

        if (mid_val > 0) {
            cout << (char)('a' + mid_val);
        }

        printRepeat('z', z_count);
        cout << endl;
    }

    return 0;
}
