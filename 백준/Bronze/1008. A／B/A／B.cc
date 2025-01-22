#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a,b;
    if (!((a>0)||(b<10))) {
        cout << "오류";
        return 0;
    }
    else {
        cin >> a >> b;
        cout << fixed << setprecision(15);
        cout << (a / b) << endl;
    }
}