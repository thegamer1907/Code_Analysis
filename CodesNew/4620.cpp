#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <stdio.h>
#include <set>
#include <map>
#include <cmath>
#include <cstring>
#include <queue>
#include <stack>
#include <functional>

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef pair<int, ii> iii;
typedef vector<iii> viii;
typedef set<int> si;

#define pb push_back
#define mp make_pair
#define fori(a, b) for(int i=a ; i<b ; i++ )
#define forn(i, a, b) for(int i=a ; i<b ; i++ )
#define forin(a, b) for(int i=a ; i>=b ; i-- )
#define fornn(i, a, b) for(int i=a ; i>=b ; i-- )
#define fi first
#define se second
#define INF 1000000007

int n;
vi s, ind;
vector < bool > taken;

int binSearch(int x){
	int l = 0;
	int r = n-1;
	int mid, res = n;

	if(s[r] < x)	return -1;

	while(l <= r){
		mid = (l+r)/2;
		if(s[mid] < x){
			l = mid+1;
		}
		else{
			res = min(res, mid);
			r = mid-1;
		}
	}

	return res;
}

int main(){
	
	int beg ;
	int ans ;

	cin >> n;

	s.resize(n);

	fori(0, n)	cin >> s[i];

	sort(s.begin(), s.end());

	ans = n;
	beg = n/2;

	fori(0, n/2){
		while(1){
			if(s[i]*2 <= s[beg]){
				ans --;
				beg++;
				break;
			}
			else{
				beg++;
			}
			if(beg == n)	break;
		}
		if(beg == n)	break;
	}

	cout << ans << "\n";
	return 0;
}