#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string s;
ll bb,ss,cc;
ll nb,ns,nc;
ll pb,ps,pc;
ll r,inf;

ll bs(ll a, ll b){
    if (a > b) return -1;
    ll c = (a+b)/2;
    ll q = 0;
    q += (max(bb*c-nb,0LL))*pb;
    q += (max(ss*c-ns,0LL))*ps;
    q += (max(cc*c-nc,0LL))*pc;
    if (q <= r){
        return max(c,bs(c+1,b));
    } else {
        return bs(a,c-1);
    }
}

int main(){
    cin >> s;
    bb = ss = cc = 0;
    inf = 1e7;
    inf *= inf;
    for (int i=0; i<s.length(); i++){
        if (s[i] == 'B') bb++;
        if (s[i] == 'S') ss++;
        if (s[i] == 'C') cc++;
    }
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;
    cout << bs(0, inf) << endl;
    return 0;
}
