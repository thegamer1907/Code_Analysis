#include <iostream>
#include <string>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>
#include <iomanip>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<vector<int>> vvi;
typedef vector<vii> vvii;

bool check(long long n, long long k)
{
	long long cpn = n;
	long long v = 0;
	while (n > 0)
	{
		v += min(n,k);
		n -= min(n,k);
		n -= n/10;
	}
	if (2*v >= cpn) return true;
	return false;
}	

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	long long n;
	cin >> n;

	long long p=0;
	long long q=n+1;
	while (q > p+1)
	{
		long long s = p + (q-p)/2;
		if (check(n,s)) q = s;
		else p = s;
	}
	cout << q;
}
