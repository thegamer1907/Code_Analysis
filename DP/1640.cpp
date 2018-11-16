#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i=0;i<n;++i)
#define tr(c, it, cond) for(auto it=c.begin(); cond and it != c.end(); ++it)
#define hell 1000000007
#define lli long long int
#define all(C) C.begin(), C.end()
#define pb push_back
#define hash unordered_map
#define vi vector<int>
#define pii pair<int,int>
#define index(V, ele) distance(V.begin(), find(all(V), ele))
#define get_sum(sum, l, r) ((l == 0) ? sum[r] : (sum[r] - sum[l - 1]))

lli t,n,k,m,q;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.precision(20);

    string s;
    cin >> s;

    vi ab,ba;
    rep(i, s.size())
        if (s[i] == 'A'){ // might be a valid AB or BA
            if (i>0 and s[i-1]=='B')
                ba.pb(i-1);
            if (i+1<s.size() and s[i+1]=='B')
                ab.pb(i);
        }

    sort(all(ab));
    sort(all(ba));

    if (!ab.empty() and !ba.empty() and ((abs(*(ab.begin()) - *(ba.rbegin())) > 1) or abs(*(ab.rbegin()) - *(ba.begin())) > 1))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
