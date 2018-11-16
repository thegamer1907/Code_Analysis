/* Be strong, be fearless, be beautiful :D
And believe that anything is possible :))
when you have the right people there
to support you :) */
//RTn_E
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define __Sync ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define __file freopen("input.txt", "r", stdin) ; freopen("output.txt", "w", stdout) ;
#define ll long long
#define ld long double
#define pb push_back
#define F first
#define S second
#define mk make_pair
template <typename T> using ordered_set =  tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using ordered_multiset =  tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using mordered_set =  tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;
const ll mod = 1e9 + 7;
const int maxn = 1e5 + 100;
const ll inf = 1e12;

//Main CODE :/\

string a[maxn];
int main() {
    __Sync;
    int n , t = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++){
        if (a[i][0] == 'O' && a[i][1] == 'O'){
            a[i][0] = '+' , a[i][1] = '+' , cout << "YES\n";
            t = 1;
            break;
        }
        if (a[i][3] == 'O' && a[i][4] == 'O'){
            a[i][3] = '+' , a[i][4] = '+' , cout << "YES\n";
            t = 1;
            break;
        }
    }
    if (!t)
        return cout << "NO" , 0;
    for (int i = 0; i < n; i++)
        cout << a[i] << "\n";
    return 0;
}
//The_End
//Game Over :D
