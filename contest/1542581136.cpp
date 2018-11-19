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

void yes(){
    cout << "YES";
    exit(0);
}

void no(){
    cout << "NO";
    exit(0);
}

int n, k;
bool a[20];

void init(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        int x;
        int s = 0;
        for(int j = 0; j < k; j++){
            cin >> x; s = s * 2 + x;
        }
        a[s] = true;
    }
}

bool isOn(int i, int x){
    return (x >> i) & 1;
}

void process(){
    for(int ms = 0; ms < (1 << (1 << k)); ms++){
        int c[4] = {0, 0, 0, 0};
        int cnt = 0;
        for(int b = 0; b < (1 << k); b++) if(a[b] && isOn(b, ms)){
            cnt++;
            int x = b;
            for(int i = 0; i < k; i++){
                if(isOn(i, x)) c[i]--;
                else c[i]++;
            }
        }
        bool check = (cnt > 0);
        for(int i = 0; i < 4; i++) if(c[i] < 0){
            check = false;
            break;
        }
        if(check) yes();
    }
    no();
}

int main(){
    ios_base::sync_with_stdio(false);
    //freopen("c.in", "r", stdin);

    init();
    process();
}

