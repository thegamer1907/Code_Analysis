#include<bits/stdc++.h>

#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define fi first
#define se second
#define sz size
#define pb push_back
#define mp make_pair
#define bg begin
#define nd end
using namespace std;

#define int long long

const int maxn = 100003;
const int maxk = 1003;

int n;
string s;
string xs[105];

int32_t main(){

	#ifndef ONLINE_JUDGE
	freopen("input.in","r",stdin);
	#endif

	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> s;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> xs[i];
	}

	bool found = false;
	for(int i=0;i<n;i++){
		if(xs[i] == s)
			found = true;
		for(int j=0;j<n;j++){
			if(s[0] == xs[i][1] && s[1] == xs[j][0])
				found = true;
		}
	}
	if(found)
		cout << "YES" << '\n';
	else
		cout << "NO" << '\n';



	return 0;
}