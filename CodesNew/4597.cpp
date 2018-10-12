#include<bits/stdc++.h>
//CLOCKS_PER_SEC
#define se second
#define fi first
#define ll long long
#define Pii pair<int,int>
#define Pli pair<ll,int>
#define ull unsigned long long
#define pb push_back
#define fio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
const double Pi=3.14159265;
const int N=5e5+10;
const ull base=163;
const int INF=0x3f3f3f3f;
const ll mod=1e9+7;
using namespace std;
int n;int a[N];bool vis[N];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    sort(a+1,a+1+n);
    int j=1;
    int ans=0;
    for(int i=n/2;i<=n;i++){
        if(j>n/2)break;
        if(a[i]>=2*a[j])j++,ans++;
    }
    cout<<n-ans<<endl;
    return 0;
}
