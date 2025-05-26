#include <iostream>
using namespace std;

int main() {
    long long n, k, a;
    cin >> n >> k >> a;
    long long product = n * k;
    if (product % a != 0) {
        cout << "double" << endl;
    }
    else {
        long long result = product / a;
        if (result >= -2147483648 && result <= 2147483647) {
            cout << "int" << endl;
        }
        else {
            cout << "long long" << endl;
        }
    }
    return 0;
}
