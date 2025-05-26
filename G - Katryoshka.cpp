#include <bits/stdc++.h>
using namespace std;

int main() {
    long long eye, mouth, body;
    cin >> eye >> mouth >> body;

    long long doll = 0;
    while (body != 0) {
        if (eye != 0 && mouth != 0) {
            if (mouth <= eye && mouth <= body) {
                doll += mouth;
                body -= mouth;
                eye -= mouth;
                mouth = 0;
            }
            else {
                doll += eye;
                body -= eye;
                mouth -= eye;
                eye = 0;
            }
        }
        else {
            long long _doll = eye / 2;
            if (_doll >= body) {
                doll += body;
            }
            else {
                doll += _doll;
            }
            break;
        }
    }
    cout << doll << "\n";
    return 0;
}
