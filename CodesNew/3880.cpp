#include <bits/stdc++.h>
#define DBG(x) cout << #x << " = " << x << endl;
#define FORN(i, x) for(int i = 0; i < x; ++i)
using namespace std;
typedef long long ll;

ll n, total = 0, rounds, minrounds = -1;


int main()
{
    cin >> n;
    FORN(_, n){
        ll ai; cin >> ai;
        total += ai;
        minrounds = max(minrounds, ai);
    }
    rounds = total/(n-1) + ((total%(n-1)?1:0));
    if(rounds < minrounds)
        rounds = minrounds;
    cout << rounds;

    return 0;
}
