#include <bits/stdc++.h>

using namespace std;
const int N = 1000007;

int phi[2][N];

void calc_phi(int id, string & s) {
    phi[id][0] = phi[id][1] = 0;
    
    for(int i = 2; i <= (int) s.size(); i++) {
        int x = phi[id][i-1];
        
        while(x != 0 and s[x] != s[i-1]) {
            x = phi[id][x];
        }
        
        if(s[x] == s[i-1])
            phi[id][i] = x+1;
        else
            phi[id][i] = 0;
    }
}

int main() {
    string s;
    cin >> s;
    string t = s;
    reverse(t.begin(), t.end());

    calc_phi(0, s);
    calc_phi(1, t);

    int best = 0, p = -1;
    for(int i = 1, j = s.size(); i <= s.size(); ++i, --j) {
        if(phi[0][i] == phi[1][j + phi[0][i]-1] and phi[0][i] > best) {
            best = phi[0][i];
            p = i - phi[0][i];
        }
    }

    if(best) cout << s.substr(p, best) << endl;
    else cout << "Just a legend\n";
}