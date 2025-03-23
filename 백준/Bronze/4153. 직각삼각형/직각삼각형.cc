#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    while (true) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) break; // 입력값이 0 0 0이면 프로그램 종료

        int m = max(a, max(b, c)); //가장 큰 값 구하기 
        int ab;

        if (m == a) { //가장 큰 값이 a이면
            ab = b * b + c * c; 
        } else if (m == b) { //b가 가장 큰 값이면
            ab = a * a + c * c;
        } else { //c가 가장 큰 값이면
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
