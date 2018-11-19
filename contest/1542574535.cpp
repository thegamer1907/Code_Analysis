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

vi a;
int main(){
	int n, k, x;
	bool flag[30];
	cin>>n>>k;
	bool flag1 = 0;
	fill(flag, false);
	for (int i = 0; i < n; ++i)
	{
		a.pb(0);
		for (int j = 0; j < k; ++j)
		{
			cin>>x;
			a[i] += x*(pow(2, j));
		}
		flag[a[i]] = true;
	}
	for (int i = 0; i < pow(2, k); ++i)
	{
		for (int j = 0; j < pow(2, k); ++j)
		{
			if(!(i & j) && flag[i] && flag[j]){
				flag1 = true;
			}
		}
	}
	if(flag1)
		cout<<"YES";
	else 
		cout<<"NO";
}