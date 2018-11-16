#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() 
{
    ll n,a=0,b=0,c=0,x,y,z;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        a+=x; b+=y; c+=z;
    }
    if(a==0 && b==0 && c==0) cout<<"YES";
    else cout<<"NO";
}