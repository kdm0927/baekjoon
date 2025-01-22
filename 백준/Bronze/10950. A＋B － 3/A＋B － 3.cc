#include <iostream>
using namespace std;

int main() {
    int a,b;
    int t;
    
    cin >> t;
    int ans[t];
    
    
    for (int i=0; i<t; i++) {
        cin >> a >> b;
        ans[i] = a+b;
    }
    
    
    for (int i=0; i<t; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}