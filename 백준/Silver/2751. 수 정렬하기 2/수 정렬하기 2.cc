#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);  // I/O 속도 최적화
    cin.tie(NULL);  // cin과 cout의 동기화 비활성화

    int N;
    cin >> N;  // 수의 개수 입력받기

    vector<int> numbers(N);

    // 수들을 입력받아서 벡터에 저장
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    // 벡터를 오름차순으로 정렬
    sort(numbers.begin(), numbers.end());

    // 정렬된 결과 출력
    for (int i = 0; i < N; ++i) {
        cout << numbers[i] << "\n";
    }

    return 0;
}
