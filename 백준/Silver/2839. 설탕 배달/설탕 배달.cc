#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int i = N / 5; // 5kg 봉지를 최대한 사용

    while (i >= 0) { // 5kg 봉지 개수를 줄여가며 검사
        int remainder = N - (i * 5);
        if (remainder % 3 == 0) { // 3kg으로 정확히 나눠떨어지면 정답 출력
            cout << i + (remainder / 3) << endl;
            return 0;
        }
        i--; // 5kg 봉지를 하나 줄이고 다시 시도
    }

    cout << -1 << endl; // 정확히 나눌 수 없는 경우
    return 0;
}