#include <iostream>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <string>
using namespace std;
const int N = 205;
const int magic = 25;
const int inf = 1e9 + 5;
const int mod = 1e9 + 7;
typedef long long ll;
int n;
bool a[(1 << 20)];
set<string> st[N];
string make(string l, string r){
    if(l.size() > 100){
        l = l.substr(l.size() - 100, 100);
    }
    if(r.size() > 100){
        r = r.substr(0, 100);
    }
    return (l + r);
}

string s[N], last[N], first[N];
int main(){
    cin >> n;
    for(int i = 0; i < n; ++ i){
        cin >> s[i];
        st[i].insert(s[i]);
        last[i] = first[i] = s[i];
    }
    int m;
    cin >> m;
    for(int i = n; i < n + m; ++ i){
        int l, r;
        cin >> l >> r;
        l --; r--;
        s[i] = make(last[l], first[r]);
        if(last[r].size() < 100){
            last[i] = last[l] + last[r];
            if(last[i].size() > 100)
                last[i] = last[i].substr(last[i].size() - 100, 100);
        }
        if(first[l].size() < 100){
            first[i] = first[l] + first[r];
            if(first[i].size() > 100){
                first[i] = first[i].substr(0, 100);
            }
        }
        for(auto it : st[l]){
            st[i].insert(it);
        }
        for(auto it : st[r]){
            st[i].insert(it);
        }
        st[i].insert(s[i]);
    }
    for(int i = n; i < n + m; ++ i){
        int ans = 0;
        
        for(int len = 15; len >= 1; -- len){
            for(int msk = 0; msk < (1 << len); ++ msk){
                a[msk] = 0;
            }
            for(auto it : st[i]){
                for(int l = 0; l + len - 1 < (it).size(); ++ l){
                    int cur = 0;
                    int r = l + len - 1;
                    for(int i = l; i <= r; ++ i){
                        cur = cur * 2 + it[i] - '0';
                    }
                    a[cur] = 1;
                }
            }
            int flag = 1;
            for(int msk = 0; msk < (1 << len); ++ msk){
                flag &= a[msk];
            }
            if(flag){
                ans = len;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
