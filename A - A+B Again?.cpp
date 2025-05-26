#include <iostream>
using namespace std;
int main()
{
    int t, res=0;
    cin>>t;
    while(t--) {
        int d;
        cin>>d;
        res = (d%10) + (d/10);
        cout<<res<<endl;
    }
    return 0;
}
