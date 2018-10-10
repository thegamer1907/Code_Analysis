#include <bits/stdc++.h>
#define PI                acos(-1)
#define pb                push_back
#define mp                make_pair
#define all(a)            (a).begin(), (a).end()
#define clr(a,h)          memset(a, (h), sizeof(a))
#define F first
#define S second
int faster_in(){int r=0,c;for(c=getchar();c<=32;c=getchar());if(c=='-') return -faster_in();for(;c>32;r=(r<<1)+(r<<3)+c-'0',c=getchar());return r;}

using namespace std;

const int INF = int(1e9 + 7);
typedef long long       ll;
typedef pair<int, int>  ii;
typedef vector<int>     vi;
typedef vector<ii>      vii;
typedef vector<ll>      vll;
    
ll r;
ll nb, ns, nc;
ll bb, ss, cc;
ll B, S, C;

bool check(ll v)
{
	ll price = 0LL;
	price += max(0LL, (B*v - nb) * bb);
	price += max(0LL, (S*v - ns) * ss);
	price += max(0LL, (C*v - nc) * cc);
	return price <= r;
}

int main()
{
    std::ios::sync_with_stdio(false); cin.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    string s;
    cin >> s;
    B = 0; S = 0; C = 0;
    for (int i = 0; i < s.size(); i++)
    {
    	if (s[i] == 'B') B++;
    	if (s[i] == 'S') S++;
    	if (s[i] == 'C') C++;
    }
    cin >> nb >> ns >> nc;
    cin >> bb >> ss >> cc;
    cin >> r;
    ll lo = 0, hi = 10000000000000LL, mid, res;

    //cout << "ans: " << check(1000000000100LL) << endl;

    while (lo <= hi)
    {
    	mid = (lo + hi) / 2;
    	if (check(mid))
    	{
    		res = mid;
    		lo = mid + 1;
    	}
    	else hi = mid - 1;
    }
    cout << res << endl;
    return 0;
}
