#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector< vi > vvi;
#define fast_io ios_base::sync_with_stdio(0);
#define show(x) cout<<x<<endl;
#define pret(x) cout<<x<<endl; return 0;
#define disp(x) cout<<x<<" ";
#define let(x,y,z) cout<<x<<" "<<y<<" "<<z<<endl;
ll MOD=1e9+7;
ll MAX=1e17;

int main(){
	fast_io;
	string p;
	int n;
	cin>>p;
	cin>>n;
	string s[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>s[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if(p==s[i]){
			show("YES");
			return 0;
		}
	}
	bool flag1=0,flag2=0;
	for (int i = 0; i < n; ++i)
	{
		if(s[i][1]==p[0]) flag1=1;
		if(s[i][0]==p[1]) flag2=1;
	}
	if(flag2 and flag1){show("YES");}
	else show("NO");
	return 0;
}