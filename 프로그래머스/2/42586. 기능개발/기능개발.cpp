#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days;

    // 1. 각 기능의 완료까지 필요한 일수 계산
    for (int i = 0; i < progresses.size(); i++) {
        int remain = 100 - progresses[i];
        int day = (remain + speeds[i] - 1) / speeds[i]; // 올림 계산
        days.push_back(day);
    }

    // 2. 배포 그룹 묶기
    int current = days[0];  // 첫 번째 배포 기준일
    int count = 1;          // 첫 기능 포함

    for (int i = 1; i < days.size(); i++) {
        if (days[i] <= current) {
            // 아직 기준일 안 넘음 → 같은 배포
            count++;
        } else {
            // 새 배포 시작
            answer.push_back(count);
            count = 1;
            current = days[i];
        }
    }
    answer.push_back(count); // 마지막 묶음 추가

    return answer;
}
