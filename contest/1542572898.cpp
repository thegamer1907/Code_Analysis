#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7, N = 200, K = 20;
string l[N],r[N];
set<int>values[N][K],ans[N];
int bin_to_int(string s){
    int ans = 0;
    for(char c : s){
        ans *= 2;
        ans += c-'0';
    }
    return ans;
}
void set_values(int id, string s){
    for(int i = 1; i < min(K,(int)s.size()); ++i)
        for(int j = 0; j <= s.size()-i; ++j){
            int cur_val = bin_to_int(s.substr(j,i));
            values[id][i].insert(cur_val);
        }
}
void output(int id){
    int ans = 0;
    while(values[id][ans+1].size() == 1<<(ans+1))
        ++ans;
    cout << ans << '\n';
}
string get_l(string s){
    return s.substr(0,min(int(s.size()),K));
}
string get_r(string s){
    int sz = min((int)s.size(),K);
    return s.substr(s.size()-sz);
}
int main(){
    int n,m;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> l[i];
        r[i] = l[i];
        set_values(i,l[i]);
    }
    cin >> m;
    for(int i = n; i < n+m; ++i){
        int a,b;
        cin >> a >> b;
        --a;
        --b;
        string tmp = r[a]+l[b];
        for(int j = 1; j < K; ++j){
            for(int x : values[a][j])
                values[i][j].insert(x);
            for(int x : values[b][j])
                values[i][j].insert(x);
        }
        set_values(i,tmp);
        l[i] = l[a];
        r[i] = r[b];
        if(l[i].size() < K)
            l[i] = get_l(tmp);
        if(r[i].size() < K)
            r[i] = get_r(tmp);
        output(i);
    }
}
