#include <bits/stdc++.h>
///TEMPLATE AREA
#define REPF(_, __, ___) for (__typeof(__) _ = (__); _ < (___); ++_)
#define REPB(_, __, ___) for (__typeof(__) _ = (__); _ > (___); --_)
#define FORF(_, __, ___) for (__typeof(__) _ = (__); _ <= (___); ++_)
#define FORB(_, __, ___) for (__typeof(__) _ = (__); _ >= (___); --_)
#define mp(x,y)  make_pair(x,y)
#define pb(x)   push_back(x)
#define se(s)   s[s.size() - 1]
#define BE(x)   x.begin(), x.end()
#define getINT(x)   (x - '0')   
#define printArr(arr, space)  for(int i = 0; i < arr.size(); ++i)  cout << arr[i] << space
using namespace std;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef long long int lli;
typedef vector<int>   vi;
///END

///DECLARING VARIABLE AREA
    int n,m;
    int first[100];
    int second[100];
    int i = 0, j = 0;
    int ans = 0;
///END

void solve(){
    cin >> n;
    REPF(i,0,n)     cin >> first[i];
    cin >> m;
    REPF(i,0,m)     cin >> second[i];
    sort(first, first+n);
    sort(second, second+m);
    while(i < n && j < m){
        if(abs(first[i] - second[j]) <= 1)  ++ans, ++i, ++j;
        else if(first[i] > second[j])    ++j;
        else if(first[i] < second[j])    ++i;
    }
    cout << ans << endl;
}

int main(){
    #ifdef __DEBUG
        freopen("fileInp.inp","r", stdin);    
        freopen("fileOut.out", "w", stdout);     
    #endif
    ios_base::sync_with_stdio(false);   cin.tie(0);     cout.tie(0);       
    solve();
    return 0;
}