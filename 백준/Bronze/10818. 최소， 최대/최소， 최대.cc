#include <iostream>
using namespace std;

int main() {
    int min = 1000000;
    int max = -1000000;
    int x, n;

    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> x;
        if (x > max) {
            max = x;
        }
        if (x < min) {
            min = x;
        }
    }

    cout << min << ' ' << max;

    return 0;
}