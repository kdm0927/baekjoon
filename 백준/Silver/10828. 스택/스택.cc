#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;  // 명령의 수

    stack<int> s;  // 스택을 구현하기 위한 스택 변수

    for (int i = 0; i < N; ++i) {
        string command;
        cin >> command;  // 명령 읽기

        if (command == "push") {
            int X;
            cin >> X;
            s.push(X);  // 스택에 X를 넣음
        }
        else if (command == "pop") {
            if (s.empty()) {
                cout << -1 << endl;  // 스택이 비어 있으면 -1 출력
            } else {
                cout << s.top() << endl;  // 스택의 가장 위 값을 출력
                s.pop();  // 스택에서 가장 위 값을 제거
            }
        }
        else if (command == "size") {
            cout << s.size() << endl;  // 스택에 있는 원소의 개수 출력
        }
        else if (command == "empty") {
            cout << (s.empty() ? 1 : 0) << endl;  // 스택이 비어 있으면 1, 아니면 0 출력
        }
        else if (command == "top") {
            if (s.empty()) {
                cout << -1 << endl;  // 스택이 비어 있으면 -1 출력
            } else {
                cout << s.top() << endl;  // 스택의 가장 위 값을 출력
            }
        }
    }

    return 0;
}
