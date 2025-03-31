#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct st {
    int x, y;
};

bool compare(const st &a, const st &b) {
    if (a.y == b.y) {
        return a.x < b.x; // y좌표가 같으면 x좌표 기준 오름차순 정렬
    }
    return a.y < b.y; // y좌표 기준 오름차순 정렬
}

int main() {
    int N;
    cin >> N;

    vector<st> s(N);

    for (int i = 0; i < N; i++) {
        cin >> s[i].x >> s[i].y;
    }

    sort(s.begin(), s.end(), compare);

    for (const auto &elem : s) { //vector<st> s의 요소를 하나씩 출력
        //auto: elem의 타입을 자동으로 st로 추론
        cout << elem.x << " " << elem.y << "\n";
    }

    return 0;
}