#include <bits/stdc++.h>
#define pb push_back
#define all(v) (v).begin() , (v).end()
#define popcnt(x) __builtin_popcount(x)
#define inf 0x3f3f3f3f
#define watch(x) cout << (#x) << " is " << (x) << endl
#define F first
#define S second

using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef long long  ll;
typedef vector<ll> vll;


const double pi = acos(-1);
int dx[] = {0 , 0 , 1 , -1 , 1 , 1 , -1 , -1};
int dy[] = {1 ,-1 , 0 , 0 , -1 , 1 ,  1 , -1};
const int N = 1e5 + 4;
int n , k;
map<int,bool> mp;
vi problems;

bool checkZero(){
    bool con = false;
    for(int m : problems)
        con |= (m == 0);
    return con;
}

bool overlab(int a , int b){
    for(int i = 0 ; i < k ; ++i){
        if((a & (1 << i)) && (b & (1 << i)))
            return true;
    }
    return false;
}

bool solve(){
    for(int m : problems){

        for(int i = 0 ; i < (1 << k) ; ++i){
            if(!overlab(i , m) && mp[i]){
                return true;
            }
        }
    }
    return false;
}


int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    scanf("%d %d" , &n , &k);

    for(int i = 0; i < n ; ++i){
        int msk = 0 , num;
        for(int j = 0 ; j < k ; ++j){
            scanf("%d" , &num);
            if(num)msk |= (1 << j);
        }
        mp[msk] = true;
        problems.pb(msk);
    }

    if(checkZero()){
        puts("YES");
        return 0;
    }

    if(solve())puts("YES");
    else puts("NO");

}
