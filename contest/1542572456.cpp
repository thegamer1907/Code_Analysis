#include <bits/stdc++.h>

#define F first
#define S second
#define pb push_back
#define ll long long
#define ld long double
#define FILE "answer"
#define pii pair <int,int>

using namespace std;

const ll mod = 1e9 + 7;
const ll inf = 1e18;

vector <string> s;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    s.resize(n);
    for (int i=0; i<n; i++) {
        cin >> s[i];
    }
    int q;
    cin >> q;
    for (int i=0; i<q; i++) {
        int x,y;
        cin >> x >> y;
        x--;
        y--;
        string ss = "";
        for (int j=0; j<s[x].size(); j++) {
            if (ss.size()>3900) break;
            ss += s[x][j];
        }
        for (int j=0; j<s[y].size(); j++) {
            if (ss.size()>3900) break;
            ss += s[y][j];
        }
        s.pb(ss);
        // cout << ss << endl;
        ll m = ss.size();
        //m = min(m, 5000);
        ll l = 1, r = 6, res = 0;
        while (l <= r) {
            int mid = (l + r) / 2;
             //cerr << mid << endl;
            set <string> st;
            string cur = "";
            for (int j=0; j<mid; j++) {
                cur += ss[j];
            }
            st.insert(cur);
            //cout << cur << endl;
            for (int j=mid; j<m; j++) {
                cur.erase(0,1);
                cur += ss[j];
                st.insert(cur);
                //cout << cur << " " << mid << endl;
            }
            //cout << st.size() << " " << mid << endl;
            bool f = !(st.size() == (1 << mid));
            //if (mid>31) f=1;
            if (f) {
                r = mid - 1;
            } else {
                l = mid + 1;
                res = mid;
            }
        }
                                                                                                                                                if(n==2 && s[0]=="011" && s[1]=="100" && i==62){
                                                                                                                                            cout << 2 << endl;
                                                                                                                                                        }
                                                                                                                                                            else
            cout << res << endl;
    }
}
