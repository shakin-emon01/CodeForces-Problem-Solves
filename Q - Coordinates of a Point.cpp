#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x, y;
    cin>>x>>y;
    if(x>0 && y>0) cout<<"Q1\n";
    else if(x<0 && y>0) cout<<"Q2\n";
    else if(x>0 && y<0) cout<<"Q4\n";
    else if(x<0 && y<0) cout<<"Q3\n";
    else if(x==0 && y!=0) cout<<"Eixo Y\n";
    else if(y==0 && x!=0) cout<<"Eixo X\n";
    else if(x==0 && y==0) cout<<"Origem\n";
    return 0;
}
