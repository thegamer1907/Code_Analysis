/*
 * Date: 17 July, 2018
 * Link: http://codeforces.com/problemset/problem/372/A
 *
 * @author:    Raghav Nauhria
 * @bio:       https://www.linkedin.com/in/raghavnauhria/
 * @git:       https://github.com/raghavnauhria
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, int> pli;
#define MOD 1000000007
#define fi(i,a,b) for(auto i=a;i<b;i++)
#define rep(i,n) fi(i,0,n)
#define fd(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define sz(a) a.size()

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	vi s(n, 0);
	
	rep(i, n)
	    cin >> s[i];
	sort(s.begin(), s.end());
	
	int half = n/2, ans = n;
	
	for(int i=0; i<n/2; ++i)
	{
		while(true)
		{
			if(s[i]*2 <= s[half])
			{
				--ans;
				++half;
				break;
			}
			else
				++half;
			
			if(half == n)
				break;
		}
		
		if(half == n)
			break;
	}
	
	cout << ans;
	
	return 0;
}  