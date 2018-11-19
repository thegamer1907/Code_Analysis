#include <bits/stdc++.h>
using namespace std;

#define sqr(x) ((x)*(x))
#define fi first
#define se second
#define endl '\n'

template<class X, class Y>
void minimize(X& x, const Y& y){
    if(x > y){
        x = y;
    }
}

template<class X, class Y>
void maximize(X& x, const Y& y){
    if(x < y){
        x = y;
    }
}

using ii = pair<int, int>;
using ll = long long;

string s;
int n;
string a[123];

void init(){
    cin >> s >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
}

void yes(){
    cout << "YES";
    exit(0);
}

void no(){
    cout << "NO";
    exit(0);
}

void process(){
    for(int i = 1; i <= n; i++){
        if(a[i] == s) yes();
        for(int j = 1; j <= n; j++) if(s[0] == a[i][1] && a[j][0] == s[1]) yes();
    }
    no();
}

int main(){
    ios_base::sync_with_stdio(false);

    init();
    process();
}

