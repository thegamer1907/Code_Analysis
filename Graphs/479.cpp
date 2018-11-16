/*input
4 1
GGGB
*/

#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>

using namespace std;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define rall(c) (c).rbegin(), (c).rend()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define sz() size()
#define f first
#define s second

int main()
{
	fast;

	int n, t;

	cin >> n >> t;

	vector<char> a(n);

	for(int i = 0; i < n; ++i)
		cin >> a[i];

	while(t--) {
		for(int i = 0; i < n - 1; ++i) {
			if(a[i] == 'B' and a[i + 1] == 'G') {
				swap(a[i], a[i + 1]);
				++i;
			}
		}
	}

	for(auto i : a)
		cout << i;

	cout << endl;

	return 0;
}
