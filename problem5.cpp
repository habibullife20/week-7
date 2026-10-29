#include <iostream>
using namespace std;

long long power(int base, int exp) {
    long long result = 1;
    while (exp > 0) {
        result *= base;
        exp--;
    }
    return result;
}

int integerBreak(int n) {
    if (n == 2) return 1;
    if (n == 3) return 2;

    int threes = n / 3;
    int remainder = n % 3;

    switch (remainder) {
        case 0:
            return power(3, threes);
        case 1:
            return power(3, threes - 1) * 4;
        case 2:
            return power(3, threes) * 2;
    }

    return 0;
}

int main() {
    int n;

    if (cin >> n) {
        cout << integerBreak(n) << endl;
    }

    return 0;
}
