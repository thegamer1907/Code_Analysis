#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair <int, int> pii;
typedef pair <ll, int> pli;
typedef pair <ll, ll> pll;
#define fr first
#define sc second
#define pb push_back
#define ppb pop_back()
#define ins insert
#define sz(x) int(x.size())
#define all(x) x.begin(),x.end()
#define mpr make_pair
#define lb lower_bound
#define ub upper_bound
int n, a, b;
int main()
{
    ios_base :: sync_with_stdio(0);
    cin >> n >> a >> b;
    a += n - 1;
    b += n - 1;
    while(a != b){
        a /= 2;
        b /= 2;
    }
    int f = log2(a);
    if(!f)cout << "Final!";
    else{
        cout << int(log2(n)) - f;
    }
    return 0;
}
