#include <bits/stdc++.h>
using namespace std;

int main() {  
vector<long long>v;
vector<long long>a;
for (int i = 0; i <3; i++)
	{
	   long long int x;
	    cin>>x;
	    v.push_back(x);
	    a.push_back(x);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<3;i++)
	{
	    cout<<v[i]<<"\n";
	}
	cout<<endl;
    for(int i=0;i<3;i++)
	{
	    cout<<a[i]<<"\n";
	}
    return 0;
}
