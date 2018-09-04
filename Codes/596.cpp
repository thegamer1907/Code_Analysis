#include <bits/stdc++.h>
using namespace std;
#define int long long
#define point pair<int,int>
#define pb push_back
#define X first
#define Y second
#define engl "\n"
int in(){int32_t x ; scanf("%d",&x) ;  return x ;}
inline long long lin() {long long x ; scanf("%lld",&x) ; return x ;}
inline void read(int *a , int n) {for (int i = 0 ; i < n ; i ++) a[i] = in();}
inline void readL(int *a , int n) {for (int i = 0 ; i < n ; i ++) a[i] = lin();}
const int maxn = 2e6 + 10;
const int maxm = 2e6 + 10;
const int mod = 1e9 + 7;
const int MAX_VAL = 1e18 + 10;
const int MAGIC = 350;
const int inf = 1e18 + 10;
int k ;
inline void recursion(int pt , int sum = 0 , int num = 0 , int len = 2)
{
    
    if (pt == len){
        k --;
        if (!k){
        cout << num << endl;
        exit(0);
        }
        return ;
    }
    for (int dig = bool(!pt) ; dig <= 9 ; dig ++){
        int sum2 = sum + dig;
        if (sum2 > 10) continue;
        int rem = len - pt - 1;
        if (rem*9+sum2 >= 10 ){
            recursion(pt+1,sum2,10*num+dig,len);
        }
    }
}
int32_t main()
{
    k = in();
    for (int len = 2 ; len <= 10000 ; len ++)
        recursion(0,0,0,len);
}
