/////////////////////////////////////////////////////////////////
///                                                           ///
///                                                           ///
///                  chocoreto template v 1.0                 ///
///                                                           ///
///                                                           ///
/////////////////////////////////////////////////////////////////
#include <set>
#include <cmath>
#include <map>
#include <vector>
#include <queue>
#include <deque>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <climits>
#include <utility>
#include <numeric>
#include <stack>
#include <iomanip>

using namespace std;

#define openfiles ifstream cin("unionday.in"); ofstream cout("unionday.out");
#define closefiles cout.close(); cin.close();
#define REP(i,j,k) for(int i = j; i < k; ++i)

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef vector<ll> vll;
typedef vector<pair<ll, ll> > vpll;

const int N = 3e5 + 1000;
const ll INFINF= 900372036854;
const int INF = 1e9 + 7;

template <class T>
T gcd(T a, T b){ return b ? gcd (b, a % b) : a; }


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; ++i)
        cin >> v[i];
    
    for(int i = n - 2; i >= 0; --i)
    {
        int l = 0, r = v[i].length() + 1;
        string t = v[i];
        if(t > v[i + 1])
        {
            for(int j = 0; j < 30; ++j)
            {
                int mid = (l + r) >> 1;
                t = v[i].substr(0, mid);
                if(t <= v[i + 1])
                    l = mid;
                else
                    r = mid;
            }
        }
        v[i] = t;
    }
  
    for(auto it : v)
        cout << it << "\n";
    
    return 0;
}


