#include<bits/stdc++.h>
using namespace std;
int main(){
   int x1, y1;
    cin>>x1>>y1;
    float ans = (float)y1 / (1-(x1/100.00));
    cout<<fixed<<setprecision(2)<<ans<<"\n";
    return 0;
}
