#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;  // 명령의 수

    queue<int> q;  // 큐를 구현하기 위한 큐 변수

    for (int i = 0; i < N; ++i) {
        string command;
        cin >> command;  // 명령 읽기

        if (command == "push") {
            int X;
            cin >> X;
            q.push(X);  // 큐에 X를 넣음
        }
        else if (command == "pop") {
            if (q.empty()) {
                cout << -1 << endl;  // 큐가 비어 있으면 -1 출력
            } else {
                cout << q.front() << endl;  // 큐의 가장 앞 값을 출력
                q.pop();  // 큐에서 가장 앞 값을 제거
            }
        }
        else if (command == "size") {
            cout << q.size() << endl;  // 큐에 있는 원소의 개수 출력
        }
        else if (command == "empty") {
            cout << (q.empty() ? 1 : 0) << endl;  // 큐가 비어 있으면 1, 아니면 0 출력
        }
        else if (command == "front") {
            if (q.empty()) {
                cout << -1 << endl;  // 큐가 비어 있으면 -1 출력
            } else {
                cout << q.front() << endl;  // 큐의 가장 앞 값을 출력
            }
        }
        else if (command == "back") {
            if (q.empty()) {
                cout << -1 << endl;  // 큐가 비어 있으면 -1 출력
            } else {
                cout << q.back() << endl;  // 큐의 가장 뒤 값을 출력
            }
        }
    }

    return 0;
}
