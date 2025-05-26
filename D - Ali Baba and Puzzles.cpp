#include <iostream>
using namespace std;

bool isPossible(int a, int b, int c, int d) {
    return (a + b - c == d) || (a + b * c == d) || (a - b + c == d) ||
           (a - b * c == d) || (a * b + c == d) || (a * b - c == d);
}
int main() {
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (isPossible(a, b, c, d))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

        //Alternative_solution
#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int a, b, c, d;
   cin>>a>>b>>c>>d;
   if((a + b - c == d) || (a + b * c == d) || (a - b + c == d) ||
           (a - b * c == d) || (a * b + c == d) || (a * b - c == d))
   cout<<"YES\n";
   else cout<<"NO\n";
    return 0;
}
