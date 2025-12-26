#include <vector>
using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    for (long long k = left; k <= right; k++) {
        // k번째 인덱스의 값:
        long long row = k / n;
        long long col = k % n;
        answer.push_back((int)(max(row, col) + 1)); //값 = max(row,col) + 1
    }
    return answer;
}