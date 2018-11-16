#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<b;i++)
#define mod 1000000007
#define ii pair<ll,ll>
#define vii vector<ii>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define mod 1000000007
ll modpow(ll base, ll exp, ll modulus) {base %= modulus;ll result = 1;while (exp > 0) {if (exp & 1) result = (result * base) % modulus;base = (base * base) % modulus;exp >>= 1;}return result;}
int main()
{
ll n;string s;
cin>>s;
ll dp[s.length()+1];dp[0]=0;
f(i,1,s.length())
{
if(s[i]==s[i-1])
dp[i]=dp[i-1]+1;
else
dp[i]=dp[i-1];
}
cin>>n;
while(n--)
{
ll q ,w;cin>>q>>w;
cout<<dp[w-1]-dp[q-1]<<"\n";
}
    

    return 0;
}