#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--) {
    int a, b, c;
    cin>>a>>b>>c;
    int M = max( max((a+b) , (b+c) ), (c+a) );
 if (M >= 10) cout<<"YES\n";
  else cout<<"NO\n";
}
    return 0;
}
