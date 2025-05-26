#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int y = n / 365;
    int m = (n % 365) / 30;
    int d = (n % 365) % 30;
cout<<y<<" years\n"<<m<<" months\n"<<d<<" days\n";
    return 0;
}
