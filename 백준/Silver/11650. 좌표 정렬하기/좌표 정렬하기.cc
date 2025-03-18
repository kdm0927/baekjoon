#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<pair<int, int>> points(N);

    for (int i = 0; i < N; i++) {
        cin >> points[i].first >> points[i].second;
    }

    // x 좌표가 증가하는 순, x가 같으면 y 좌표가 증가하는 순으로 정렬
    sort(points.begin(), points.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if(a.first == b.first)
            return a.second < b.second;
        return a.first < b.first;
    });

    for (const auto &p : points) {
        cout << p.first << " " << p.second << "\n";
    }

    return 0;
}
