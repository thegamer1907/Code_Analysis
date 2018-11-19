#include<bits/stdc++.h>
using namespace std;

const int N = 205, M = 2000;


int n, m, x, y, ans[N];
string s[N];

inline bool check(string &s, int k){
    int n = s.size();
    set < string > q;
    for(int i = 0; i + k - 1 < n; i++){
        q.insert(s.substr(i, k));
    }
    return q.size() == (1 << k);
}

inline int get(string &s){
    int k = 1;
    while(check(s, k)){
        k++;
    }
    return k - 1;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> s[i];
        ans[i] = get(s[i]);
    }
    cin >> m;
    for(int i = n + 1; i <= n + m; i++){
        cin >> x >> y;
        s[i] = s[x] + s[y];
        int besit = s[i].size();
        if(besit > M){
            s[i] = s[i].substr(0, M / 2) + s[i].substr(besit - M / 2);
        }
        ans[i] = max({get(s[i]), ans[x], ans[y]});
        cout << ans[i] << "\n";
    }
}
