#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x, y;
    cin>>x>>y;
    
    cout<<"floor " <<x<< " / " << y<< " = "<<floor(x/y)<<endl;
cout<<"ceil " <<x<< " / " << y<< " = "<<ceil(x/y)<<endl;
cout<<"round " <<x<< " / " << y<< " = "<<llround(x/y)<<endl;

    return 0;
}
