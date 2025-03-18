#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    // 1부터 N까지 사람을 저장
    vector<int> people;
    for (int i = 1; i <= N; i++) {
        people.push_back(i);
    }

    vector<int> result;
    int current = 0;

    // 사람이 하나씩 제거될 때까지
    while (!people.empty()) {
        current = (current + K - 1) % people.size();  // K번째 사람을 찾기
        result.push_back(people[current]);
        people.erase(people.begin() + current);  // 사람 제거
    }

    // 결과 출력
    cout << "<";
    for (int i = 0; i < result.size(); i++) {
        if (i != 0) cout << ", ";
        cout << result[i];
    }
    cout << ">" << endl;

    return 0;
}
