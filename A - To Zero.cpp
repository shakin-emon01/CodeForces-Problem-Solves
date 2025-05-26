#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) {
        long long n, k;
        cin>>n>>k;
        if(n%2==0)
        cout<<(n+(k-2))/(k-1)<<endl;
        else{
            long long count=1;
            n-=k;
            if(n>0) count+=(n+(k-2))/(k-1);
            cout<<count<<endl;
        }
    }
    return 0;
}
