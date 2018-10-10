#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define REP(i,a,b) for (int i = a ; i <= b ; i++)
#define X real()
#define Y imag()
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

const int OO = INT_MAX;
const int MOD = 1e9+7;
const int N = 1e5+7;

map<ll,ll> cnt,cnt3;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;
    ll k;
    cin >> n>>k;
    vi vec;
    REP(i,0,n-1)
    {
        int ai;
        cin >> ai;
        vec.PB(ai);
        cnt[ai]++;
    }
    vi cnt2;
    REP(i,0,n-1)
    {
        cnt[vec[i]]--;
        cnt2.PB(cnt[vec[i]*k]);
    }


    ll ans = 0;
    REP(i,0,n-1)
    {
        cnt3[vec[i]] += cnt2[i];
        //cout << cnt3[vec[i]] << ' ';
        //cout << cnt2[i] << endl;
    }

    REP(i,0,n-1)
    {
        cnt3[vec[i]] -= cnt2[i];
        ans += cnt3[vec[i]*k];
    }
    cout << ans << endl;
    return 0;
}
