#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	string s;
	cin>>a>>s>>b;
	if(s==">"){
	    if(a>b) cout<<"Right\n";
	    else cout<<"Wrong\n";
	}
	else if(s=="<"){
	    if(a<b) cout<<"Right\n";
	    else cout<<"Wrong\n";
	}
	else if(s=="="){
	    if(a==b) cout<<"Right\n";
	    else cout<<"Wrong\n";
	}
	return 0;
}
