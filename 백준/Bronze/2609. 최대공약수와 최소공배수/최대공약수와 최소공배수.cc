#include <iostream>
using namespace std;

// 유클리드 알고리즘으로 최대 공약수 구하기
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    // 최대 공약수
    int gcd_val = gcd(a, b);

    // 최소 공배수 (a * b) / gcd(a, b)
    int lcm_val = (a * b) / gcd_val;

    cout << gcd_val << endl;
    cout << lcm_val << endl;

    return 0;
}
