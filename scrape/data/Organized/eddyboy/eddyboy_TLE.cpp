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
int n,m,k;
int a[100010LL];
int p,ans;
int mm,lcnt;
int f[100010LL];
signed main(){
	cin>>n>>m>>k;mm=m;
	p=k;
	for(int i=1LL;i<=m;i++)cin>>a[i];
	sort(a+1,a+m+1);
	while(mm>0LL){
		int cnt=0LL;
		int r=upper_bound(a+lcnt+1LL,a+m+1LL,p)-a-1LL;
		cnt=r-lcnt;
		if(cnt==0LL){
			p+=k;
			continue;
		}
		p+=cnt;
		mm-=cnt;
		lcnt+=cnt;
		ans++;
		// cout<<cnt<<' '<<p<<' '<<m<<endl;
	}
	cout<<ans<<endl;
	return 0;
}
/*
1000000000000000000 10 34
1 135 16345742 14366423643 1341421432 543534 2 3435 
*/