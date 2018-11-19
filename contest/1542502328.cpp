#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int N = 1e5+50;
const ll oo = 1e18;
const ll mod = 1e9+7;

ll a[N],f[N],dp[21][N],cl,cr,cur;

void add(int x){
	cur += f[a[x]];
	f[a[x]]++;
}

void rem(int x){
	f[a[x]]--;
	cur -= f[a[x]];
}

void change(int l,int r){
	if(l > r)return;
	while(cl < l)rem(cl++);
	while(cl > l)add(--cl);
	while(cr < r)add(++cr);
	while(cr > r)rem(cr--);
}

void calc(int g,int l,int r,int opl,int opr){
	if(l > r)return;
	int md = (l+r)/2;
	int op = -1;
	dp[g][md] = 1e18;
	for(int i = max(opl,md);i<=opr;i++){
		change(md,i-1);
		if(cur + dp[g-1][i] < dp[g][md]){
			dp[g][md] = cur + dp[g-1][i];
			op = i;
		}
	}
	calc(g,l,md-1,opl,op);
	calc(g,md+1,r,op,opr);
}

int main(){
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=n;i>0;i--){
		dp[1][i] = dp[1][i+1] + f[a[i]];
		f[a[i]]++;
	}
	for(int i=2;i<=k;i++){
		memset(f,0,sizeof(f));
		cl = 1;
		cr = 0;
		cur = 0;
		calc(i,1,n,1,n);
	}
	cout << dp[k][1] << endl;
}