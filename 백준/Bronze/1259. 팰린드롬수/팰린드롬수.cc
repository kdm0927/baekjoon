#include <iostream>
#include <string>
using namespace std;

int main() {
    while (true) {
        string num;
        cin >> num;
        
        if (num == "0") break;  // 0이면 종료
        
        string reversedNum = string(num.rbegin(), num.rend());
        
        if (num == reversedNum) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
    return 0;
}
