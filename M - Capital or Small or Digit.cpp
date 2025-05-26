#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if (s>="A" && s<="Z") cout<<"ALPHA\nIS CAPITAL";
    else if (s>="a" && s<="z") cout<<"ALPHA\nIS SMALL";
    else cout<<"IS DIGIT\n";
    return 0;
}
