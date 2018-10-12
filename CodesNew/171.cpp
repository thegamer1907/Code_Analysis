#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m1 make_pair   
//#define ll int64_t
//int dp[5000+1][5000+1];
//dp[1][1]=0;
ll gcd(ll a,ll b)
{
    if(a==0)
    return b;
    return gcd(b%a,a);
}
//ll dp[2][500+1][500+1];
int main()
{
ll n,k,y,z;
cin>>n>>k;
for(int i=1;i<=n;i++)
{
    y=k+(ll)pow(2,i-1);
    z=pow(2,i);
    if((y%z)==0)
    {
        cout<<i<<endl;
        return 0;
    }
}
}