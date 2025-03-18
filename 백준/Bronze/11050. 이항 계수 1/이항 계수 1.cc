#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    // K가 N-K보다 클 경우 계산을 최소화하기 위해 K를 N-K로 바꾼다.
    if (K > N - K) {
        K = N - K;
    }

    long long result = 1;
    for (int i = 0; i < K; ++i) {
        result *= (N - i);    // N * (N-1) * (N-2) * ... * (N-K+1)
        result /= (i + 1);    // 1 * 2 * 3 * ... * K
    }

    cout << result << endl;

    return 0;
}
