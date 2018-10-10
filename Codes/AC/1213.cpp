#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ret(x) cout<<x<<endl; return 0;
ll MOD=1e9+7;

int main(){
	ios_base::sync_with_stdio(0);
	int n,m;
	cin>>n>>m;
	string a[n],b[m];
	unordered_map<string,int> mm;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		mm[a[i]]=1;
	}
	int x=0;
	for (int i = 0; i < m; ++i)
	{
		cin>>b[i];
		if(mm[b[i]]==1) x++;
	}
		n-=x;
		m-=x;
	if(x%2==0){
		if(n>m) {ret("YES");}
		ret("NO");
	}
	if(n>=m) {ret("YES");}
	ret("NO");
	return 0;
}