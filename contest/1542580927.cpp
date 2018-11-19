#include <bits/stdc++.h>
using namespace std;
#pragma comment(linker,"/stack:1024000000,1024000000")
#define db(x) cout<<(x)<<endl
#define pc(x) putchar(x)
#define ps(x) puts(x)
#define pf(x) push_front(x)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ms(x,y) memset(x,y,sizeof x)
typedef long long LL;
const double pi=acos(-1),eps=1e-9;
const LL inf=0x3f3f3f3f,mod=1e9+7,maxn=112345;
int n,k,kk,a[maxn][5],s[5],v[22][5],vis[22];
inline bool check(int x){
	int ans=0,s[5]={0};
	for(int i=0;i<kk;i++)
		if((1<<i)&x){
			if(!vis[i])
				return 0;
			ans++;
			for(int j=0;j<k;j++)
				if(v[i][j])
					s[j]++;
		}
	for(int j=0;j<k;j++)
		if(s[j]>ans/2)
			return 0;
	return 1;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>k;
	kk=1<<k;
	for(int i=0;i<n;i++){
		int flag=0;
		for(int j=0;j<k;j++){
			cin>>a[i][j];
			if(a[i][j]){
				s[j]++,flag|=1<<j;
				if(s[j]>=n){
					db("NO");
					return 0;
				}
			}
		}
		if(!flag){
			db("YES");
			return 0;
		}
		if(!vis[flag]){
			for(int j=0;j<k;j++)
				v[flag][j]=a[i][j];
			vis[flag]=1;
		}
	}
	for(int i=(1<<kk)-1;i;i--)
		if(check(i)){
			db("YES");
			return 0;
		}
	db("NO");
	return 0;
}