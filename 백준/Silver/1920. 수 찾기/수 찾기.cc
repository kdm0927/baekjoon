#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N;

    unordered_set<int> A;
    int num;

    // N개의 정수 입력받아 해시셋에 저장 (O(N))
    for (int i = 0; i < N; i++) {
        cin >> num;
        A.insert(num);
    }

    cin >> M;

    // M개의 정수에 대해 존재 여부 확인 (O(M))
    for (int i = 0; i < M; i++) {
        cin >> num;
        cout << (A.count(num) ? 1 : 0) << '\n';
    }

    return 0;
}
