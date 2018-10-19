#include <bits/stdc++.h>
using namespace std;
#define all(v)  (v.begin()),(v.end())
#define sc(n)   scanf("%lld",&n)
#define pr(n)   printf("%d\n",n)
#define mk make_pair
typedef long long ll;
typedef vector<int>vi;
typedef unordered_map<ll,int>mp;
typedef pair<int,int>pir;
typedef priority_queue<int>pq;
void file(){freopen("in.txt", "r", stdin);freopen("out.txt", "w", stdout);}
const int MAX=1e5+7 , INF = (1<<30);
ll b[100005],a[100005],cost=0,n,s,x;;

bool ok(int m){
for(ll i=0;i<n;++i)
    b[i]=a[i]+((i+1)*m);
    sort(b,b+n);
   ll r=0;
for(int i=0;i<m;++i)
    r+=b[i];
    if(r<=s)
        cost=r;
return r<=s;
}
int main(){
    cin>>n>>s;
    int l=0,r=n;
    for(int i=0;i<n;++i)
        sc(a[i]);

    while(l<r){
        int m=l+(r-l+1)/2;
        if(ok(m))
            l=m;
        else
            r=m-1;
    }
    cout<<l<<" "<<cost<<endl;
    return 0;
}
