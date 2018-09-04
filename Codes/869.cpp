
#include<bits/stdc++.h>
using namespace std;

#define si(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define pri(x) printf("%d",x)
#define pll(x) printf("%lld",x)
#define sstr(s) scanf("%s",s)
#define nl printf("\n")

#define ll long long int
#define pii pair<int,int>
#define pLL pair<ll,ll>
#define vi vector<int>

#define pb push_back
#define mp make_pair
#define fr first
#define se second
#define FOR(i,x,y) for(int i=x;i<y;i++)
#define mod 1000000007
#define pi 2*acos(0)
#define endl '\n'
int solve(ll num,ll pos,ll len){
    ll hl = len/2;
    if(pos==hl+1){
	return num;
    }
    if(pos<=hl){
	return solve(num-1,pos,hl);
    }
    else{
	return solve(num-1,pos-hl-1,hl);
    }
}
int main()
{
   ll n,k;
   cin>>n>>k;
   ll tmp = 1;
   tmp<<=n;
   tmp--;
   cout<<solve(n,k,tmp)<<endl;
   return 0;
}
