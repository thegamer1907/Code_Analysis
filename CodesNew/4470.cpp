#include <bits/stdc++.h>
using namespace std;
#define sqr(x) ((x)*(x))
#define par make_pair
#define pb push_back
#define fi first
#define se second
#define endl '\n'
template<class X, class Y> void amax(X& x, const Y& y){if(x < y) x = y;}
template<class X, class Y> void amin(X& x, const Y& y){if(x > y) x = y;}
typedef vector<int> vi; typedef pair<int, int> ii; typedef long long ll; typedef long double ld;
const int INF = 1e9 + 10; const ll INFL = 1e18 + 10;
const int MAX = 5e5 + 10;

int n, m;
string s[MAX];
int del[MAX];

void attempt(int l, int r, int p){
    int pos = l - 1;
    for(int i = r - 1; i >= l; i--){
        if(s[i].size() > p){
            if(s[i + 1].size() <= p || s[i][p] > s[i + 1][p]){
                pos = i;
                break;
            }
        }
    }
    
    for(int i = pos; i >= l; i--){
        if(s[i].size() > p){
            del[i] = p;
        }
    }
    
    int i = pos + 1;
    while(i <= r){
        int j = i;
        while(j < r && (s[j + 1].size() <= p || (s[i].size() > p && s[i][p] == s[j + 1][p]))) j++;
        if(s[i].size() > p && i != j) attempt(i, j, p + 1);
        i = j + 1;
    }
}

void process(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> s[i];
        amax(m, s[i].size());
        del[i] = s[i].size();
    }
    
    attempt(1, n, 1);
    
    for(int i = 1; i <= n; i++){
        cout << s[i].substr(0, del[i]) << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //freopen("d.in", "r", stdin);
    process();
}

