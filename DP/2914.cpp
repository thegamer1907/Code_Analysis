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
typedef vector<int> vi; typedef pair<int, int> ii; typedef long long ll;
const int INF = 1e9 + 10; const ll INFL = 1e18 + 10;
const int MAX = 110;

int n, k;
int a[MAX], b[MAX];

void process(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= k; i++) cin >> b[i];
    
    for(int i = 1; i <= n; i++) if(a[i] == 0){          
        for(int j = 1; j <= k; j++){
            if((i > 1 && b[j] < a[i - 1]) || (i < n && b[j] > a[i + 1])){
                cout << "Yes"; return;
            }
        }
    }
    
    for(int i = 1; i < n; i++) if(a[i] > 0 && a[i + 1] > 0 && a[i] > a[i + 1]){
        cout << "Yes"; return;
    }
    
    cout << "No";
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //freopen(".in", "r", stdin);
    process();
}

