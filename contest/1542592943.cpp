#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef pair <int, int> ii;
typedef vector <int> vi;
typedef vector <ii> vii;

#define INF 1000000000
#define fastIO ios::sync_with_stdio(false);cout.tie(0);cin.tie(0);
#define endl '\n'
#define foreach(v,c) for(typeof((c).begin()) v=(c).begin();v!=(c).end();++v)
#define all(a) a.begin(),a.end()
#define in(a,b) ((b).find(a)!=(b).end())
#define fill(a,v) memset(a,v,sizeof a)
#define sz(a) ((int)(a.size()))
#define mp make_pair
#define pb push_back

int main(){
	int n;
	string a;
	cin>>a;
	string s[110];
	bool flag1 = 0;
	bool flag2 = 0;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>s[i];
		if(s[i] == a){
			flag1 = flag2 = 1;
		}
		if(s[i][0] == a[1]){
			flag2 = 1;
		}
		if(s[i][1] == a[0]){
			flag1 = 1;
		}
	}
	if(flag1 && flag2){
		cout<<"YES";
	}
	else cout<<"NO";
}