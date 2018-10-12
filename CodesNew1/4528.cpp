#include <bits/stdc++.h>
using namespace std;
#define lp(i,n) for(int i=0; i<n ; ++i)
typedef unsigned long long ul;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vii;
typedef pair<int, int> pii;
typedef vector<pii> vp;
int OO = 2e9;
const double eps = 1e-9 ;
const int N = 500005;
int mx = -1e9 , mn = 1e9 ;
int arr[N] , arr2[N];
vi vec ;

int main()
{
    int n , x ;
    cin >> n ;
    lp(i,n)
        cin >> arr[i];
    x = n - 1 ;
    sort(arr,arr+n,greater<int>());
    for(int i = (n/2) - 1  ; i >= 0 ; --i){
        if(arr[x] <= arr[i]/2){
            -- x ;
        }
    }
    cout << x + 1 << endl ;


    return 0;
}
