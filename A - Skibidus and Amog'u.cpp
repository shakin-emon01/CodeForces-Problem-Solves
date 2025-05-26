#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
     string S;
     cin>>S;
     cout<<(S.substr(0, S.size()-2) + "i")<<endl;
    }
    return 0;
}
