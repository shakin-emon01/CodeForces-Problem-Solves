#include<bits/stdc++.h>
using namespace std;

int main(){
    int l1,l2,r1,r2;
    cin>>l1>>r1>>l2>>r2;
    if(l2-l1>=0 & l2<=r1) {
        cout<<l2<<" ";
        if(r2-r1>=0) cout<<r1;
        else cout<<r2;
    }
    else if(l1-l2>=0 & l1<=r2) {
        cout<<l1<<" ";
        if(r1-r2>=0) cout<<r2;
        else cout<<r1;
    }
    else cout<<-1;
    return 0;
}
