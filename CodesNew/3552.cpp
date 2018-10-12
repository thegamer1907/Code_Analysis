#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
#define fi first
#define se second
#define pb push_back
#define pbb pop_back
#define make_pair mp
#define all(x) x.begin(), x.end()
#define uniq(x) x.erase(unique(x.begin(),x.end()),x.end())
#define mem(array, value) memset(array, value, sizeof(array))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/__gcd(a,b))*b
#define line cout << "\n==========\n"
#define mod 1000000007
#define SIZE 1000001

int main ()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    int n, m;
    cin >> n >> m;
    int ara[n];
    for (int i = 0; i<n; i++){
        cin >> ara[i];
    }
    sort (ara, ara+n);
    int x;
    x = ara[n-1]+m;
    while (m--){
        ara[0]++;
        sort(ara, ara+n);
//        for (int i = 0; i<n; i++){
//            cout << ara[i] << " ";
//        }
//        cout << endl;
    }
    cout << ara[n-1] << " " << x << endl;
    return 0;
}
