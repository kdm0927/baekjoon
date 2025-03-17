#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;  // 회원 수 입력 받기

    vector<pair<int, pair<int, string>>> members;  // (나이, (가입 순서, 이름)) 형태로 저장

    for (int i = 0; i < N; ++i) {
        int age;
        string name;
        cin >> age >> name;  // 나이와 이름 입력 받기
        members.push_back({age, {i, name}});  // 가입 순서를 i로 저장하면서 나이와 이름 저장
    }

    // 정렬: 먼저 나이를 기준으로 오름차순 정렬, 나이가 같으면 가입 순서(i)를 기준으로 정렬
    sort(members.begin(), members.end(), [](const auto& a, const auto& b) {
        if (a.first == b.first) {
            return a.second.first < b.second.first;  // 나이가 같으면 가입 순서로 정렬
        }
        return a.first < b.first;  // 나이 기준으로 정렬
    });

    // 정렬된 결과 출력
    for (const auto& member : members) {
        cout << member.first << " " << member.second.second << endl;  // 나이와 이름 출력
    }

    return 0;
}