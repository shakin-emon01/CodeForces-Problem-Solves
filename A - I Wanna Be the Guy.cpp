#include <bits/stdc++.h>
#include <set>
using namespace std;
int main()
{
    int n, p, q;
    set<int> S;
    cin>>n;
    cin>>p;
    for(int i=0; i<p; i++) {
      int a;
      cin>>a;
      S.insert(a);
    }
    cin>>q;
      for(int j=0; j<q; j++) {
      int a;
      cin>>a;
      S.insert(a);
    }
  if(S.size()==n) cout<<"I become the guy.\n";
  else cout<<"Oh, my keyboard!\n";
    return 0;
}
