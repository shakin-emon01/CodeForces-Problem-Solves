#include <iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    int n1 = x%10;
    int n2 = (x-n1)/10;
    if(n1%n2==0 || n2%n1==0 ) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
