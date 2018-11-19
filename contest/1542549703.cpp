#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h,m,s,a,b;
    cin>>h>>m>>s>>a>>b;
    if(a>b)swap(a,b);
    bool cl,an;
    cl=an=1;
    s/=5;
    m/=5;
    if(s>=b||s<a)an=0;
    else cl=0;
    
    if(m>=b||m<a)an=0;
    else cl=0;
    
    if(h>=b || h<a)an=0;
    else cl=0;
    
    cl|an?cout<<"YES":cout<<"NO";
    return 0;
}