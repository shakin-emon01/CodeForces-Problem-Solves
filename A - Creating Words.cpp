#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        string S1, S2;
        cin>>S1>>S2;
        cout<<(S2.substr (0, S2.size()-2) + S1.substr( S1.size()-2))<<
          " "<<(S1.substr (0, S1.size()-2) + S2.substr( S2.size()-2))<<endl;
    }
    return 0;
}
