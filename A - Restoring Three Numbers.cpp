#include <iostream>
using namespace std;
int main()
{
    int x1, x2, x3, x4;
    cin>>x1>>x2>>x3>>x4;
    int a, b, c;
    if(x1>x2 && x1>x3 && x1>x4){
        a=x1-x2;
        b=x1-x3;
        c=x1-x4;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    else if(x2>x1 && x2>x3 && x2>x4){
        a=x2-x1;
        b=x2-x3;
        c=x2-x4;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    else if(x3>x1 && x3>x2 && x3>x4){
        a=x3-x1;
        b=x3-x2;
        c=x3-x4;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    else {
        a=x4-x1;
        b=x4-x3;
        c=x4-x2;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }

    return 0;
}
