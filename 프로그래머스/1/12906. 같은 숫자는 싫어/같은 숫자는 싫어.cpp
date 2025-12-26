#include <vector>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer; // answer 벡터 생성
    answer.push_back(arr[0]); // 첫 번째 원소 무조건 추가

    for (int i = 1; i < arr.size(); i++) {
        // 그다음부터는 answer.back()과 다를 때만 추가
        if (arr[i] != answer.back()) {
            answer.push_back(arr[i]);
        }
    }
    return answer;
}
