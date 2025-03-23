#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool tf(int num) {
    if (num<2) return false;
    for (int i=2; i<=sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int sosu;
    int n;
    int count=0;

    cin >> n;

    vector<int> list(n); //size가 n인 동적 배열 생성
    for (int i=0; i<n; i++) {
        cin >> list[i];
    }

    for (int i=0; i<n; i++) {
        if (tf(list[i])) {
            count++;
        }
    }

    cout << count;
    return 0;
}
