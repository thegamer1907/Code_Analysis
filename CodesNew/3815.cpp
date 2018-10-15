#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <utility>
#include <deque>
#include <list>
#include <sstream>
#include <fstream>
#include <complex>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <cassert>
#include <iostream>
#include <utility>
#include <iterator>
#include <numeric>
#include <climits>

using namespace std;

#define fr(i,a,b) for (int i = (a), _b = (b); i <= _b; i++)
#define frr(i,a,b) for (int i = (a), _b = (b); i >= _b; i--)
#define rep(i,n) for (int i = 0, _n = (n); i < _n; i++)
#define repr(i,n) for (int i = n - 1; i >= 0; i--)

#define ll long long
#define ld double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<ii> vii;
typedef vector<int> vi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    ll a[n];
    ll sum = 0;
    ll maxi = 0;
    rep(i,n)
    {
        cin >> a[i];
        sum = sum+a[i];
        maxi = max(maxi,a[i]);
    }
    if(sum%(n-1)==0)
        cout << max(sum/(n-1),maxi) << endl;
    else
        cout << max((sum/(n-1))+1,maxi) << endl;
}
