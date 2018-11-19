#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define FILE "conquest"

typedef long long ll;

set < string > st;
int n;
string z;
vector < string > v;

int main() {
    ios_base::sync_with_stdio(0);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
    //freopen(FILE".in", "r", stdin);
    //freopen(FILE".out", "w", stdout);
#endif
    cin >> z >> n;
    for (int i = 0 ; i < n ; i++){
        string s;
        cin >> s;
        v.push_back(s);
        st.insert(s);
    }
    for (int i = 0 ; i < n ;  i++){
        for (int j = 0 ; j < n ; j++){
            string s = "";
            s =  v[i][1];
            s += v[j][0];
            st.insert(s);
            s = v[j][1];
            s += v[i][0];
            st.insert(s);
            s = v[i][1];
            s += v[i][0];
            st.insert(s);
            s = v[j][1];
            s += v[j][0];
            st.insert(s);
        }
    }
    if (st.count(z))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
