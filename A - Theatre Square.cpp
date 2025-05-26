#include <iostream>
using namespace std;
int main()
{
    long long m, n, a, output;
    cin>>n>>m>>a;
    output = ((n+a-1)/a) * ((m+a-1)/a);
    cout<<output<<endl;
    return 0;
}
