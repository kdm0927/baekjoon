#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    queue<int> q;

    // 1부터 N까지 큐에 삽입
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    // 카드가 한 장 남을 때까지 반복
    while (q.size() > 1) {
        q.pop();  // 첫 번째 카드 버리기
        q.push(q.front());  // 두 번째 카드를 아래로 보내기
        q.pop();
    }

    cout << q.front() << '\n';  // 마지막 남은 카드 출력

    return 0;
}
