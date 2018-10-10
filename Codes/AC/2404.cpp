#include <bits/stdc++.h>

using namespace std;

typedef long long I64;

const int NMAX = 1000000;
const int VMAX = 1e7;
const I64 INF  = (1LL << 60);

int ciur[VMAX+2], pos[VMAX+2];
vector<pair<int,I64>> primes;
int N, Q, v[NMAX+2];

void pre()
{
    ciur[1] = ciur[0] = 1;
    for( int i = 4;  i <= VMAX;  i += 2 ) ciur[i] = 2;
    pos[2] = 0;
    ciur[2] = 2;
    primes.push_back({2,0});
    for( int i = 3;  i <= VMAX;  i += 2 ) {
        if( ciur[i] ) continue;
        ciur[i] = i;
        int sz = (int)primes.size();
        pos[i] = sz;
        primes.push_back({i, 0});

        for( I64 j = 1LL*i*i;  j <= VMAX;  j += i ) ciur[j] = i, pos[j] = sz;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    pre();
    cin >> N;
    for( int i = 1;  i <= N;  ++i ) {
        cin >> v[i];
        int nr = v[i];
        while( nr > 1 ) {
            int dd = ciur[nr];
            int pp = pos[nr];
            while( nr % dd == 0 )
                nr /= dd;
            primes[pp].second++;
        }
    }
    for( int i = 1;  i < (int)primes.size();  ++i )
        primes[i].second += primes[i - 1].second;
    cin >> Q;
    for( int i = 1;  i <= Q;  ++i ) {
        int x,y;
        cin >> x >> y;
        pair<int,I64> xx = {x,0}, yy = {y,INF};
        int a = lower_bound(primes.begin(), primes.end(), xx) - primes.begin() - 1;
        int b = upper_bound(primes.begin(), primes.end(), yy) - primes.begin() - 1;
        I64 ans = 0;
        if( b < 0 ) ans = 0;
        else if( a < 0 ) ans = primes[b].second;
        else ans = primes[b].second - primes[a].second;
        cout << ans << '\n';
    }
    return 0;
}
