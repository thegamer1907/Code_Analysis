// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;


// const int mx = 2e5;
// int n, m;
// string s;

// struct node {
//     char l, r;
//     int eqs;
//     node() {};
// };

// node combine(node &a, node &b) {
//     if(a.eqs == -1) return b;
//     if(b.eqs == -1) return a;
//     node ans = node();
//     ans.eqs = a.eqs + b.eqs;
//     if(a.r == b.l) ans.eqs++;
//     ans.l = a.l, ans.r = b.r;
//     return ans;
// }

// node t[4*mx];

// void build(int idx, int l, int r) {
//     int mid = (l+r)/2, left = idx*2+1, right = idx*2+2;
//     if(l == r) {
//         node &n = t[idx];
//         n.l = n.r = s[l];
//         n.eqs = 0;
//         return;
//     }
//     build(left, l, mid); build(right, mid+1, r);
//     t[idx] = combine(t[left],t[right]);
// }

// node query(int L, int R, int idx = 0, int l = 0, int r = n-1) {
//     int mid = (l+r)/2, left = idx*2+1, right = idx*2+2;
//     if(R < l || L > r) {
//         node ans = node();
//         ans.eqs = -1;
//         return ans;
//     }
//     if(L <= l && R >= r) return t[idx];
//     node resl = query(L, R, left, l, mid), resr = query(L, R, right, mid+1, r);
//     return combine(resl, resr);
// }

// int main() {
//     cin >> s;
//     n = s.length();

//     build(0, 0, n-1);

//     cin >> m;
//     while(m--) {
//         int l, r;
//         cin >> l >> r;
//         l--, r--;
//         node ans = query(l, r, 0, 0, n-1);
//         cout << ans.eqs << endl;
//         // cout << query(l, r, 0, 0, n-1);
//     }
// }

#include <bits/stdc++.h>
using namespace std;
const int mx = 2e5+5;
string s;
int dp[mx], m;

int main() {
    cin >> s;
    int n =(int) s.length();
    for(int i = 1; i < s.length(); i++) {
        dp[i+1] = dp[i];
        if(s[i] == s[i-1]) dp[i+1]++;
    }
    cin >> m;
    while(m--) {
        int l ,r;
        cin >> l >> r;
        cout << dp[r]-dp[l] << endl;
    }
}