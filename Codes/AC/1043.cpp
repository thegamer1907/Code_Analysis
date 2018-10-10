#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define ret(x) cout<<x<<endl; return 0;
ll MOD=1e9+7;
	
int n,k;
string s;

bool f(int x){
	int a=0,b=0;	
	for (int i = 0; i < x; ++i)
	{
		if(s[i]=='a') a++;
		else b++;
	}
	if(min(a,b)<=k) return 1;
	for (int i = x; i < n; ++i)
	{
		if(s[i]=='a') a++;
		else b++;
		if(s[i-x]=='a') a--;
		else b--;
		if(min(a,b)<=k) return 1;
	}
	return 0;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin>>n>>k>>s;
	int ans;
	int l=0,r=n,m;
	while(l<=r){
		m=(l+r)/2;
		if(f(m)){
			l=m+1;
			ans=m;
		}
		else r=m-1;
	}
	ret(ans);
	return 0;	
}