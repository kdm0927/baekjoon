#include <iostream>
using namespace std;

int main() {
    int a,b;
    while ((cin >> a >> b) && !(a==0 && b==0)) {
        if (a <= 0 || b >= 10) {
            continue; // 조건을 만족하지 않으면 현재 입력 건너뛰기
        }
        cout << a + b << endl;
    }
    
    return 0;
}