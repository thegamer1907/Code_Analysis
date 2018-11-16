#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <list>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <set>
#include <algorithm>
#include <stack>
#include <queue>
#include <iostream>
#include <fstream>
#include <chrono>
#include <complex>
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
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back

	
using namespace std;

int main() {
	ll n, k;
	cin >> n >> k;

	vector<ll> scores(n);
	for(ll i = 0; i < n; ++i) {
		cin >> scores[i];
	}
	ll rank = 0;
	ll count = 0;

	sort(scores.begin(), scores.end(), [](ll a, ll b) { return a > b; });

	ll kscore = scores[k - 1];

	ll i = 0;
	while (i < n && scores[i] != 0 && scores[i] >= kscore) {
		++count;
		++i;
	}
	cout << count << endl;
	return 0;
}