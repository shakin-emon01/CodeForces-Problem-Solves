#include <bits/stdc++.h>
using namespace std;

int main() {
    double N;
    cin >> N;
    int intPart = (int)N;
    double decimalPart = N - intPart;
    if (decimalPart == 0) {
        cout << "int " << intPart << endl;
    }
    else {
        cout << "float " << intPart << " " << fixed << setprecision(3) << decimalPart << endl;
    }
    return 0;
}
