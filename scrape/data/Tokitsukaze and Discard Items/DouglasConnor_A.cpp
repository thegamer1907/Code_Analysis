#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N=1e5+5;
const int mod=1e9+7;
const int inf=0x3f3f3f3f;
const double pi=acos(-1.0);
const double E=2.718281828459;

#define rep(i,a,b) for(int i=a;i<b;i++)
#define MT(a,b) memset(a,b,sizeof(a))


int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int m,count,tcount,i,j;
	ll n,k,maxn,p[N];
	
	cin>>n>>m>>k;
	
	rep(i,0,m)
	cin>>p[i];
	
	count=0;
	maxn=k;//maxn=x*k+empty
	i=0;
	while(i<m){
		if(p[i]<=maxn){
			tcount=0;
		    while(p[i]<=maxn&&i<m){
			i++;
			tcount++;
			}
		count++;
		maxn+=tcount;
		}
		else{
			ll temp=p[i]-maxn;
			if(temp%k) temp+=k-(temp%k);
			maxn+=temp;
		}
	}
	cout<<count<<endl;
	return 0;
}