#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <map>
#include <queue>
#include <vector>
#include <cstring>
#include <iomanip>
#include <set>
#include<ctime>
#include<unordered_map>
//CLOCKS_PER_SEC
#define se second
#define fi first
#define ll long long
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
#define Pii pair<int,int>
#define Pli pair<ll,int>
#define ull unsigned long long
#define pb push_back
#define fio ios::sync_with_stdio(false);cin.tie(0)
const int N=2e5+10;
const ull base=163;
const int INF=0x3f3f3f3f;
using namespace std;
int a[N],b[N],c[N];
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        c[i]=i;
        for(int j=1;j<=m;j++){
            int x;scanf("%d",&x);
            if(x<a[j]){
                b[j]=i;
            }
            a[j]=x;
            if(b[j]<c[i])c[i]=b[j];
        }
    }
    int q;scanf("%d",&q);
    while(q--){
        int l,r;scanf("%d%d",&l,&r);
        if(c[r]<=l)cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}