#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    set<string> words;  // 중복 제거를 위해 set 사용

    // 단어 입력 받기
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        words.insert(word);
    }

    // set을 vector로 변환 (정렬하기 위해)
    vector<string> sortedWords(words.begin(), words.end());

    // 정렬 기준: 1) 길이 짧은 순, 2) 사전 순
    sort(sortedWords.begin(), sortedWords.end(), [](const string &a, const string &b) {
        if (a.size() == b.size()) {
            return a < b;  // 길이가 같으면 사전 순 정렬
        }
        return a.size() < b.size();  // 길이 순 정렬
    });

    // 결과 출력
    for (const auto &word : sortedWords) {
        cout << word << '\n';
    }

    return 0;
}
