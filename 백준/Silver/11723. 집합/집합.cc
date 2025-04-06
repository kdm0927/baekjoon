#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    int x;

    string command;
    vector <int> v(21);
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    cin >> n;
    
    while(n--) {
        cin >> command;

        if (command == "add") {
            cin >> x;
            v[x] = 1;
        }
        else if (command == "remove") {
            cin >> x;
            v[x] = 0;
        }
        else if (command == "check") {
            cin >> x;
            if (v[x]==1) {
                cout << "1\n";
            }
            else {
                cout << "0\n";
            }
        }
        else if (command == "toggle") {
            cin >> x;
            if (v[x]==1) {
                v[x]=0;
            }
            else {
                v[x]=1;
            }
        }
        else if (command == "all") {
            for (int i=1; i<=20; i++) {
                v[i]=1;
            }
        }
        else if (command == "empty") {
            fill(v.begin(), v.end(), 0);  // 모든 원소를 0으로
        }
    }
    return 0;
}