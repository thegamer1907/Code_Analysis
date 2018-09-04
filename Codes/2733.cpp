#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
typedef long long ll;
const ll INF=1e9+10,M=1e6+100,MOD=1e9+7,ML=25;
typedef pair<int,int> pii;
typedef pair<pii,ll> piii;
ll f[M];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,cur=0;
	string s;
	cin>>s;
	n=s.size();
	for(int i=1;i<n;i++){
		while(cur&&s[cur]!=s[i])
			cur=f[cur];
		cur+=(s[cur]==s[i]);
		f[i+1]=cur;
	}
	if(f[n]==0)
		return cout<<"Just a legend",0;
	for(int i=1;i<n-1;i++){
		if(f[i+1]==f[n]){
			for(int j=0;j<f[n];j++)
				cout<<s[j];
			return 0;
		}
	}
	if(f[f[n]]==0)
		return cout<<"Just a legend",0;
	for(int i=0;i<f[f[n]];i++)
		cout<<s[i];
}
