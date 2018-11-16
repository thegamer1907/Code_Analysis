#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    long long x=a*(c*(c+1)/2);
    if(b>=x)cout<<0;
    else cout<<x-b;
    return 0;
}