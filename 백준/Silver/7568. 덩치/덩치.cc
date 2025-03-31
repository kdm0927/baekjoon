#include <iostream>
#include <vector>
using namespace std;

struct st {
    int w;
    int h;
    int gr;
};

int main() {
    int person;
    cin >> person;

    vector<st> p(person);

    for (int i = 0; i < person; i++) {
        p[i].gr = 1; // Initialize all ranks to 1
    }

    for (int i=0; i<person; i++) {
        cin >> p[i].w >> p[i].h;
    }

    for (int i = 0; i < person; i++) {
        for (int j = 0; j < person; j++) {
            if (p[j].w > p[i].w && p[j].h > p[i].h) {
                p[i].gr++;
            }
        }
    }

    for (int i=0; i<person; i++) {
        cout << p[i].gr << " ";
    }

    return 0;
}