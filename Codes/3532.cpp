#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define mp make_pair
#define all(a) a.begin(),a.end()
#define bitcnt(x) __builtin_popcountll(x)
#define MOD 1000000007
#define PI 3.14159265
#define BLOCK 20000
#define MAXN 500005
typedef unsigned long long int uint64;
typedef long long int int64;


bool chck( int64 val , int64 n ){
    int64 ate = 0;
    int64 copyn=n;
    int turn = 0;
    while( n ){
        turn++;
        if( turn % 2 ){
            ate+=min(n,val);
            n-=min(n,val);
        }
        else{
            int64 pet = n/10;
            n-=pet;
        }
    }
    n = copyn;
    if( ate + ate >= n )
        return true;
    return false;
}

int main(){
    int64 n;
    cin>>n;
    int64 lo=1,hgh=1e18;
    int64 ans=-1;
    while( lo <= hgh ){
        int64 mid = (lo+hgh);
        mid/=2;
        if( chck( mid, n ) ){
            ans = mid;
            hgh = mid-1;
        }
        else{
            lo = mid +1;
        }
    }
    cout<<ans;
    return 0;
}