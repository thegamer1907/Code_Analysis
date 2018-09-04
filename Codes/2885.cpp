#include<bits/stdc++.h>
const int N = 1e6 + 5;
using namespace std;

int Z[N], maxx;
string s;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> s;
    int l = 0, r = 0; Z[0] = (int)s.size();
    for (int i = 1; i < (int)s.size(); i++){
        if (i > r || i+Z[i-l]-1 >= r){
            r = max(r+1, i); l = i;
            while (r < (int)s.size() && s[r] == s[r-l]) r++; Z[i] = r-l; r--;
        }
        else Z[i] = Z[i-l];
    }
    for (int i = 1; i < (int)s.size(); i++) {
        if (i+Z[i] == (int)s.size() && Z[i] <= maxx) {
            for (int j = 0; j < Z[i]; j++) cout << s[j];
            return 0;
        }
        maxx = max(Z[i], maxx);
    }
    cout << "Just a legend";
}
