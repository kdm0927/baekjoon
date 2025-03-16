#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    while (true) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) break;

        int m = max(a, max(b, c));
        int ab;

        if (m == a) {
            ab = b * b + c * c;
        } else if (m == b) {
            ab = a * a + c * c;
        } else {
            ab = a * a + b * b;
        }

        if (m * m == ab) {
            cout << "right\n";
        } else {
            cout << "wrong\n";
        }
    }

    return 0;
}
