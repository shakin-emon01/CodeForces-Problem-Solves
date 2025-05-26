#include <iostream>
using namespace std;
int main()
{
    int i;
   long long int k, n, w,ans, res=0;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++){
        res+=k*(i);
    }
    ans=res-n;
    if(ans<0)
            ans=0;
cout<<ans<<endl;
    return 0;
}
