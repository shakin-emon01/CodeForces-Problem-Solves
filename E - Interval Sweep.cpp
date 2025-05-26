#include<bits/stdc++.h>
using namespace std;
int main(){
  int a, b;
   cin>>a>>b;
   if(a>0 && a<100 && b>0 && b<100) {
   if( a==b || (a+1)==b || (a-1)==b) cout<<"YES\n";
   else cout<<"NO\n";
   }
   else cout<<"NO\n";
    return 0;
}
