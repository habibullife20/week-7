#include <iostream>
using namespace std;

bool hasAlternatingBits(int n) {
    int prev_bit = n & 1;

    n >>= 1;

    while (n > 0) {
        int curr_bit = n & 1;

        if (curr_bit == prev_bit) {
            return false;
        }

        prev_bit = curr_bit;
        n >>= 1;
    }

    return true;
}

int main() {
    int n;

    if (cin >> n) {
        cout << boolalpha << hasAlternatingBits(n) << endl;
    }

    return 0;
}
