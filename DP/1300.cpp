#include <bits/stdc++.h>
 
#define MEMSET(a, b) memset(a, (b), sizeof(a))
#define forn(i, n) for (int i=0 ; i < (int)(n) ; ++i)
#define for1(i, n) for (int i=1 ; i <= (int)(n) ; ++i)
#define fore(i, l, r) for(int i = (int)(l); i <= (int)(r); ++i)
#define ford(i, n) for(int i = (int)(n); i >= 0 ; --i)
#define all(cont) cont.begin(), cont.end()
#define Sort(n) sort(all(n))
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
 
using namespace std;
 
int main()
{
    int arr[100], maxi = 0, currmax;
    int n;
    cin >> n;
    forn(i, n){
        cin >> arr[i];
    }     
    forn(i, n){
        fore(j, i, n-1){
            currmax = 0;
            forn(k, n){
                if(k < i || k > j)
                    currmax += arr[k];
                else if(!arr[k])
                    currmax += 1;
            }
            if(currmax > maxi){
                maxi = currmax;
            }
        }
    }
    cout << maxi << endl;
    return 0;
}
 
 
 
/* Source code dengan case
 
int main(){
    int T;
    cin >> T;
    for(int counterT = 1 ; counterT <= T ; T++){
         
        printf("%d\n", ans);
    }
    return 0;
}
 */
 
/* Source code dengan case
 
int main(){
    int T;
    cin >> T;
    for(int counterT = 1 ; counterT <= T ; T++){
         
        printf("Case #%d: %d\n", counterT, ans);
    }
    return 0;
}
 */