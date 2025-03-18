#include <iostream>
using namespace std;

int main() {
    long long tsN;
    long long s,m,l,xl,xxl,xxxl;
    long long t, p;
    long long sum = 0;

    cin >> tsN;
    cin >> s >> m >> l >> xl >> xxl >> xxxl;
    cin >> t >> p;

    long long shirts[] = {s,m,l,xl,xxl,xxxl};

    for (int i=0; i<6; i++) {
        sum += (shirts[i] + t - 1) / t;
    }

    cout << sum << "\n";
    cout << tsN/p << " " << tsN%p;
}