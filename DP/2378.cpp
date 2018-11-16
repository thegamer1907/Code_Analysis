#include <bits/stdc++.h>
using namespace std;
#define fastcin ios_base::sync_with_stdio(false)
#define precisecout cout << fixed << setprecision(10)
#define pb push_back
#define mk make_pair
#define mkt make_tuple
#define binary(x) bitset<8*sizeof(x)>(x)
#define zero(x) memset(x, 0, sizeof(x))
#define set(x, i) memset(x, i, sizeof(x))
#define ii pair<int, int>
#define iii tuple<int, int, int>
#define ll long long
#define inf 0x3f3f3f3f

#ifdef ebug
#define dprintf printf
#else
#define dprintf if(false) printf
#endif

int main(){
    fastcin;
    queue<int> rem;
    int n, k, tot = 0, minTot = inf, minTotId = -1, a, i = 0;
    cin >> n >> k;
    while(n--){
        cin >> a;
        rem.push(a);
        tot += a;

        if(k > 1)
            k--;
        else{
            if(tot < minTot){
                minTot = tot;
                minTotId = i;
            }
            tot -= rem.front();
            rem.pop();
            i++;
        }
    }

    cout << minTotId+1 << endl;
}