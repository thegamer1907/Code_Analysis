#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define len(x) x.size()
#define int long long
#define endl "\n"
#define m_p make_pair
#define front top
using namespace std;

typedef long double ld;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pari;
ld PI = 3.14159265358979323846;


void volodya22(){
    #ifdef THERE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout.precision(20);
    cout << fixed;
}

int n,m;
const int N = 1e6;
vi d;


void input(){
    cin >> n >> m;
    d.resize(n);
    int sum = 0;
    for(int i = 0;i < n;i++){
        int a;
        cin >> a;
        sum+=a;
        d[i] = sum;
    }
}


void solve(){
    int sum = 0;
    while(m--){
        int a;
        cin >> a;
        sum += a;
        int index = upper_bound(all(d),sum)-d.begin();
        if(index >= n){
                index = 0;
                sum = 0;
        }
        cout << n-index << endl;
    }
}

signed main(){
    volodya22();
    input();
    solve();
}
