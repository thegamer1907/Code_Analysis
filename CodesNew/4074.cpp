#include <bits/stdc++.h>

using namespace std;

#define rfile freopen("path.in", "r", stdin)
#define wfile freopen("path.out", "w", stdout)
#define files rfile; wfile
#define pb push_back
#define fi first
#define se second
#define sws ios_base::sync_with_stdio(0)
#define f(i, n) for (int i = 0; i < n; i++)

typedef long long ll;
typedef long double ld;
typedef vector< int > vi;
typedef vector< char > vc;
typedef vector< vc > vvc;
typedef vector< vi > vvi;
typedef map< int, int > mapT;
typedef pair< int, int > pairT;
typedef priority_queue< ll > pq;

const int inf = (int)1e9 + 111;
const ll llinf = (ll)3e18;
const int N = (int)2e5 + 111;
const ld PI = (ld)acos(-1);

long long arr[200005];
int n, q;
int binarysearch(long long target)
{
	int low = 0, high = n; 
	// numElems is the size of the array i.e arr.size() 
	while (low != high) {
    int mid = (low + high) / 2; 
    // Or a fancy way to avoid int overflow
    if (arr[mid] <= target) {
        /* This index, and everything below it, must not be the first element
         * greater than what we're looking for because this element is no greater
         * than the element.
         */
        low = mid + 1;
    }
    else {
        /* This element is at least as large as the element, so anything after it can't
         * be the first element that's at least as large.
         */
        high = mid;
    }
	}
	return high;
}
int main()
{
	scanf("%d %d", &n, &q);
	cin >> arr[0];
	for (int i = 1; i < n; i++)
	{
		long long a;
		cin >> a;
		arr[i] = arr[i-1] + a;
	}

	long long cnt = 0;
	for (int i = 0; i < q; i++)
	{
		long long attack;
		cin >> attack;
		cnt += attack;
		int result = binarysearch(cnt);
		if (result == n)
			cnt =0;
		result = (result == n) ? n : n - result;
		cout << result << endl;
	}
	return 0;
}
