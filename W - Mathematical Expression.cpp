#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    char s,e;
    cin>>a>>s>>b>>e>>c;
    if(s=='+'){
        if(a+b==c) cout<<"Yes";
        else cout<<a+b;
    }
    if(s=='-'){
        if(a-b==c) cout<<"Yes";
        else cout<<a-b;
    }
    if(s=='*'){
        if(a*b==c) cout<<"Yes";
        else cout<<a*b;
    }
    return 0;
}
