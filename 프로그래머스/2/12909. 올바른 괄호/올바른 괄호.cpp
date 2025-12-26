#include <iostream>
#include <string>
using namespace std;

bool solution(string s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            count++;
        } else { // ')'
            count--;
        }
        // 닫는 괄호가 더 많아진 순간 false
        if (count < 0) return false;
    }
    // 끝까지 다 돌고 짝이 맞아야 true
    return count == 0;
}
