#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;  // 테스트 데이터의 수 입력받기
    
    while (T--) {
        string s;
        cin >> s;  // 괄호 문자열 입력받기
        
        stack<char> st;  // 스택 선언
        bool isValid = true;  // VPS가 맞는지 확인하는 플래그
        
        for (char ch : s) {
            if (ch == '(') {
                st.push(ch);  // 여는 괄호는 스택에 넣기
            } else if (ch == ')') {
                if (st.empty()) {
                    isValid = false;  // 닫는 괄호에 맞는 여는 괄호가 없으면 VPS 아님
                    break;
                } else {
                    st.pop();  // 짝을 맞추기 위해 스택에서 꺼내기
                }
            }
        }
        
        // 스택이 비어 있지 않으면 여는 괄호가 남아있으므로 VPS 아님
        if (!st.empty()) {
            isValid = false;
        }

        if (isValid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
