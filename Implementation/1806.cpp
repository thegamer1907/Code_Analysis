//Author ::  ABHINAV3010 ::

#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
typedef long long ll;
typedef pair<ll,ll> p;
ll mod=1000000007;
ll gcd(ll a,ll b)
{
    return (b==0)?a:gcd(b,a%b);
}
int main()
{
fast;
string s;
cin>>s;
int cnt=1;
int flag=0;
for(int i=1;i<s.size();i++)
{
    if(s[i]==s[i-1])
    {
        cnt++;
        if(cnt>=7)
        {
            flag=1;
            break;
        }
    }else
    {
        cnt=1;
    }
}
if(flag)
{
    cout<<"YES";
}else
{
    cout<<"NO";
}
return 0;
}
