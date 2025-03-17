#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<string> board;

// W로 시작하는 체스판 패턴 비교
int countRepaint(int x, int y, char startColor) {
    int repaints = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char expectedColor = (i + j) % 2 == 0 ? startColor : (startColor == 'W' ? 'B' : 'W');
            if (board[x + i][y + j] != expectedColor) {
                repaints++;
            }
        }
    }
    return repaints;
}

int main() {
    cin >> N >> M;
    board.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> board[i];
    }

    int minRepaints = 64;  // 최악의 경우 64칸 전부 다시 칠해야 함

    // 모든 8x8 체스판 시작점 탐색
    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            // W 시작과 B 시작 중 최소값 찾기
            int repaintW = countRepaint(i, j, 'W');
            int repaintB = countRepaint(i, j, 'B');
            minRepaints = min(minRepaints, min(repaintW, repaintB));
        }
    }

    cout << minRepaints << '\n';
    return 0;
}
