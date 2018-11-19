#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define sd(x) scanf("%d",&(x))
#define slld(x) scanf("%lld",&(x))
#define pd(x) printf("%d",(x))
#define plld(x) printf("%lld",(x))
#define br printf("\n")
#define pi pair<int,int>
#define vi vector<int>
#define pb push_back
#define RESET(val) memset(val, 0, sizeof(val))
#define MP(a,b) make_pair(a, b)
#define fi first
#define se second
#define fr(i,a,b) for(int i=a;i<=b;i++)
//-------------x---------------x----------------x----------------
string t[102];

int main(){
//	freopen("input.txt","r",stdin);
	string s;
	cin>>s;int n;cin>>n;
	for(int i=0;i<n;i++){
		cin>>t[i];
		if(t[i][0]==s[0] && t[i][1]==s[1]){
			cout<<"YES";
			return 0;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			if(t[i][0]==s[1] && t[j][1]==s[0]){
			cout<<"YES";
			return 0;
		}

	}
	cout<<"NO";
	return 0;
}