#include      <iostream>
#include       <iomanip>
#include        <string>
#include        <cstdio>
#include         <cmath>
#include       <cstring>
#include     <algorithm>
#include        <vector>
#include         <queue>
#include         <deque>
#include           <map>
#include <unordered_map>
#include           <set>
#include        <bitset>
#include       <fstream>
#include        <time.h>

#define               P(n, f) cout<<n<<(f?'\n':' ')
#define                            pi pair<int,int>
#define                                LL long long
#define                      ULL unsigned long long
#define                            lowbit(x) x&(-x)
#define                                mp make_pair
#define                                elif else if
#define       range(i, a, b) for(auto i=a;i<=b;++i)
#define     itrange(i, a, b) for(auto i=a;i!=b;++i)
#define     rerange(i, a, b) for(auto i=a;i>=b;--i)
#define  fill(arr, tmp) memset(arr,tmp,sizeof(arr))
#define IOS ios::sync_with_stdio(false), cin.tie(0)
using namespace std;
string tmp;
int n,t;

void init() {
    cin>>n>>t;
    cin>>tmp;
}

void solve() {
    while(t--)rerange(i,n-1,1)if(tmp[i]=='G' and tmp[i-1]=='B'){
        swap(tmp[i],tmp[i-1]);
        --i;
    }
    P(tmp,1);
}

int main() {
    IOS;
    init();
    solve();
    return 0;
}