#include <iostream>
using namespace std;

int minOperations(int n) {
    int count = 0;
    while (n > 0) {
        if ((n & 3) == 3) {
            n++;
            count++;
        } else if ((n & 1) == 1) {
            n--;
            count++;
        }
        n >>= 1;
    }
    return count;
}

int main() {
    int n;

    if (cin >> n) {
        cout << minOperations(n) << endl;
    }

    return 0;
}
