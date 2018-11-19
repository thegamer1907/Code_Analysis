// choices and belief 

#include <bits/stdc++.h>
using namespace std;
const int N = 1234567;
const int mod = 1e9+7;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef priority_queue<pii, vector<pii>, greater<pii>> min_pq;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define whatis(x) cout << #x << " is " << x << endl;
#define inf 1e18
int main()
{
	ios_base:: sync_with_stdio(false); cin.tie(0);
	// freopen ("inp","r",stdin);
	// freopen ("out","w",stdout);
	string s,want;
	int n;
	cin>>want;
	cin>>n;
	vector<char>st,en;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		if(want==s)
		{
			cout<<"yes\n";return 0;
		}
		string rev;
		rev[0]=s[1];
		rev[1]=s[0];
		if(rev==want)
		{
			cout<<"yes\n";return 0;
		}
		st.pb(s[0]);
		en.pb(s[1]);
	}
	int f1=0,f2=0;
	for(auto c : en)
	{
		if(c==want[0])f1=1;
	}
	for(auto c : st)
	{
		if(c==want[1])f2=1;
	}

	if(f1 and f2){
		cout<<"yes\n";return 0;
	}
	cout<<"no\n";
	
	return 0;
}