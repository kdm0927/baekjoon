#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int n;
    int x = 0;
    
    stack <int> s;
    cin >> n;

    for (int i=0; i<n; i++) {
        string str;
        cin >> str;
        //push
        if (str=="push") { //입력값이 push이면
            cin >> x;
            s.push(x);
        }
        //top
        else if (str=="top") {
            if (s.empty()) {
                cout << -1 << endl;  // 스택이 비어 있으면 -1 출력
            } else {
                cout << s.top() << endl;  // 스택의 가장 위 값을 출력
            }
        }
        //pop
        else if (str=="pop") {
            if (s.empty()==false) {
                cout << s.top() << endl;
                s.pop();   
            }
            else if (s.empty()==true) {
                cout << -1 << endl;
            }
        }
        //empty
        else if (str=="empty") {
            if (s.empty()==false) {
                cout << 0 << endl;
            }
            else if (s.empty()==true) {
                cout << 1 << endl;
            }
        }
        //size
        else if (str == "size") {
            cout << s.size() << endl;  // 스택에 있는 원소의 개수 출력
        }
    }
    return 0;
}