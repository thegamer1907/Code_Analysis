#include <bits/stdc++.h>
using namespace std;
#define repl(i,x,n) for(long long i=(long long)(x);i<(long long)(n);i++)
#define rep(i,x,n) for(long i=long(x);i<long(n);i++)
int main() 
{
    //ifstream cin("input.in");
    //ofstream cout("output.out");
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s,p;
    long n;
    vector<char> v1,v2;
    cin>>s;
    cin>>n;
    rep(i,0,n)
    {
        cin>>p;
        if(p==s)
        {
            cout<<"YES";
            return 0;
        }
        v1.push_back(p[0]);
        v2.push_back(p[1]);
    }
    /*for(auto i:v1)
        cout<<i<<" ";
    cout<<"\n";
    for(auto i:v2)
        cout<<i<<" ";
    cout<<"\n";*/
    bool flag=0;
    for(auto i:v1)
    {
        if(i==s[1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NO";
        return 0;
    }
    flag=0;
    for(auto i:v2)
    {
        if(i==s[0])
        {
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
}       

