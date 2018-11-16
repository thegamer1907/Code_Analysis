#include <stdio.h>
#include <bits/stdc++.h>
#define pb push_back
#define pp pop_back
#define mp make_pair
#define f first
#define s second
#define all(x) x.begin(), x.end()
typedef long long ll;

using namespace std;

const int N = 3e5 + 111, inf = 1e9, mod = 1e9 + 7;
const ll INF = 1e18;
const double pi = acos(-1.0), eps = 1e-9;

int n, a, b;

int main(){
    srand(time(NULL));
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    cout << setprecision(10) << fixed;

    cin >> n >> a >> b;
    if(a > b)
        swap(a, b);

    a--, b--;

    int l = 0;
    while((1 << l) < n)
        l++;

    if(a / (1 << l - 1) != b / (1 << l - 1)){
        cout << "Final!";
        return 0;
    }

    for(int i = l - 2; i >= 0; --i){
        if(a / (1 << i) != b / (1 << i)){
            cout << i + 1;
            return 0;
        }
    }

    //cout << (clock() + 0.0) / CLOCKS_PER_SEC;
    return 0;
}