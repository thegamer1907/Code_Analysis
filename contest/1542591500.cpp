#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue>
#include<bits/stdc++.h>
#include <string>
using namespace std;
typedef long long  ll;
typedef pair<ll, ll>pii;
//ll x4[4]={1,0,0,-1};
//ll y4[4]={0,1,-1,0};
string s,f;
ll n;
bool h,k;

int main()
{
//freopen ("primes.in", "r", stdin);
cin>>s;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>f;
    if(f==s)
    {
        h=1;
        k=1;
    }
    if(s[0]==f[1])
        k=1;
    if(s[1]==f[0])
        h=1;
}
if(h==1&&k==1)
    cout<<"YES";
else
    cout<<"NO";

     return 0;
}
