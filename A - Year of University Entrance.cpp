#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;

    vector <int> v;

    for(int i=0;n>i;i++)
    {
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    int j=n/2;
    cout<<v[j];

    return 0;
}
