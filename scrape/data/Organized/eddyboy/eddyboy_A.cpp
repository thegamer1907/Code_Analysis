#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cstdio>
#define int long long
#define pb push_back
#define mp make_pair
#define INF 0x3f3f3f3f
#define Inf 1000000000000000000LL
#define F first
#define S second
using namespace std;
typedef pair<int,int>pii;
int w[100010];
int n,m,i,j,p,k,ans;
signed main(){
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n>>m>>k;
	for(i=0;i<m;i++)cin>>w[i];
	for(i=0;i<m;ans++){
		p=(w[i]-i-1)/k*k+k;
		j=i;
		while(w[j]-i<=p&&j<m)j++;
		i=j;
	}
	cout<<ans<<endl;
	return 0;
}