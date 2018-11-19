#define prob GameOfSegments
 
#include <bits/stdc++.h>

using namespace std;
#define rep(i, l, r) for (int i = l; i<r;i++)
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define pb(c) push_back(c)
#define vii vector<pair<int,int>>
#define vvi vector<vector<int>>
#define ii pair<int,int>
#define mp(i, j) make_pair(i,j)
#define ull unsigned long long int
#define ll  long long int
#define PI  3.141592653589793238
#define MOD (1000000007)
#define INF (2000000007)
#define EPS 0.0000000001
#define MAXN (205000+1)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
#ifdef DEBUG

    freopen("input", "r", stdin);//use flush(cout)
#endif
    vector<string> strs;
    int n;
    cin >> n;
    rep (i, 0, n) {
        string s;
        cin >> s;
        strs.pb(s);
    }
    int q;
    cin >> q;
    vii queries;
    rep (i, 0, q) {
        int x, y;
        cin >> x >> y;
        x--, y--;
        queries.push_back(mp(x, y));
    }
    int ans[q]={0};
    rep (k, 1, 11) {
        vector<set<int>> count;
        vector<string> str = strs;
        rep (i, 0, n) {
            string temp;
            set<int> setTemp;
            if (str[i].length() >= k)
                rep (j, 0, str[i].length()-k+1) {
                    string sub = str[i].substr(j, k);
                    bitset<10> curr(sub);
                    setTemp.insert(curr.to_ulong());
                }
            count.push_back(setTemp);
        }

        rep (q, 0, queries.size()) {
            int kt = k;

            string s1 = str[queries[q].first];
            string s2 = str[queries[q].second];
            string temp = ((s1.length() <(k-1))?s1:s1.substr(s1.length() - k+1,k-1) ) +
                    ((s2.length() <(k-1))?s2:s2.substr(0,k-1) );
            string toAdd = s1+s2;
            toAdd = (toAdd.length()<k-1)?toAdd : (toAdd.substr(0,k-1) + toAdd.substr(toAdd.length()-k+1,k-1));
            str.push_back(toAdd);

            set<int> setTemp;
            setTemp.insert(all(count[queries[q].first]));
            setTemp.insert(all(count[queries[q].second]));

            if (temp.length() >= k)
                rep (j, 0, temp.length()-k+1) {
                    string sub = temp.substr(j, k);
                    bitset<10> curr(sub);
                    setTemp.insert(curr.to_ulong());
                }
            count.push_back(setTemp);
            if (setTemp.size()==(1<<k)) {
                    ans[q] = k;
            }



        }


    }

    rep (i,0,q)cout<<ans[i]<<endl;

    return 0;
}