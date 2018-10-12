# include <bits/stdc++.h>

using namespace std;

int n, m, cnt;
string a[1010], b[1010];
map <string, int> us;

int main() {
    ///ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cin >> n >> m;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
        us[a[i]] = 1;
    }
    for(int i = 1;i <= m;i++) {
        cin >> b[i];
        if(us[b[i]] == 1) {
            cnt++;
        }
    }
    bool ok = false;
    while(cnt > 0) {
        if(ok == false) {
            m--;
        }
        else {
            n--;
        }
        if(ok == false) ok = true;
        else ok = false;
        cnt--;
    }
    if(n == m) {
        cout << "NO";
    }
    else {
        if(n > m) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
}
