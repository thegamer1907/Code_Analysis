#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define ll long long int
int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};

int main()
{
	//ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int i,j,x,y,t;
	ll n,k;
	cin>>n>>k;
	ll b=k;
	ll pre[55];
	pre[0]=1LL;
	for(i=1;i<=52;++i)
		pre[i]=pre[i-1]*2LL;
	for(i=1;i<=n;++i){
		if(k%pre[i-1]==0)
			k/=pre[i-1];
		++k;
		if(k%2==0){
			cout<<i;
			return 0;
		}
		k=b;
	}
return 0;
}