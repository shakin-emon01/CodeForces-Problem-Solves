#include <iostream>
using namespace std;

int main() {
    int A, B;
    char S;
    cin >> A >> S >> B;
    if (S == '+') {
        cout << A + B << endl;
    } else if (S == '-') {
        cout << A - B << endl;
    } else if (S == '*') {
        cout << A * B << endl;
    } else if (S == '/') {
        cout << A / B << endl;
    }
    return 0;
}
             //Alternative_Solution

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    char s;
    cin>>x>>s>>y;
    if(s== '+') cout<<x+y<<endl;
    else if(s== '-') cout<<x-y<<endl;
    else if(s== '*') cout<<x*y<<endl;
    else if(s== '/') cout<<x/y<<endl;
    return 0;
}
