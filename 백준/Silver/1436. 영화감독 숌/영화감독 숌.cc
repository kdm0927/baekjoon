#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int endnum = 665;
    string str;

    int count = 0;

    cin >> n;

    while (1) {
        endnum ++;
        str = to_string(endnum);

        if (str.find("666") != string::npos) {
            count++;
        }

        if (count == n) {
            cout << endnum;
            return 0;
        }
    }
}