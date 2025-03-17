#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<double> scores(N);
    double maxScore = 0.0;

    // 점수 입력 및 최댓값 찾기
    for (int i = 0; i < N; i++) {
        cin >> scores[i];
        if (scores[i] > maxScore) {
            maxScore = scores[i];
        }
    }

    // 조정된 점수의 합 계산
    double sum = 0.0;
    for (int i = 0; i < N; i++) {
        sum += (scores[i] / maxScore) * 100.0;
    }

    // 새로운 평균 계산
    double newAverage = sum / N;
    cout << fixed;
    cout.precision(6);  // 소수점 6자리까지 출력
    cout << newAverage << '\n';

    return 0;
}
