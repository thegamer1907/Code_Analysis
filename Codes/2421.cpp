#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define mp make_pair
#define cps CLOCKS_PER_SEC
#define mod (ll)1000000007
#define f first
#define s second
#define debug1(x) cout<<x<<"\n"
#define debug2(x,y) cout<<x<<" "<<y<<"\n"
#define debug3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n"
#define nl cout<<"\n";
#define priority_queue pq
#define inf (ll)1e15
#define test cout<<"abcd\n";
#define pi pair<int,int>
#define pii pair<int,pi>
#define pb push_back
#define mxn 10000005
vector<int> a(mxn),c(mxn);
void sieve(){
a[1]=1;
for(int i=2; i<mxn; i+=2) a[i]=2;
for(int i=3; i*i<=mxn; i+=2)
if(a[i]==0)
    for(int j=i*i; j<mxn; j+=2*i)
        if(!a[j]) a[j]=i;
for(int i=3; i<mxn; i+=2) if(a[i]==0) a[i]=i;
}

int main(){
sp;
sieve();
int n,q,l,r;
cin>>n;
int b[n+1];
for(int i=1; i<=n; ++i) cin>>b[i];
for(int i=1; i<=n; ++i){
    int x=b[i];
    if(a[x]==x){
        ++c[x];
        continue;
    }
    while(x>1){
    int y=a[x];
    ++c[y];
            while(x%y==0)
        x/=y;
    }
}
for(int i=2; i<mxn; ++i)
    c[i]+=c[i-1];
cin>>q;
while(q--){
    cin>>l>>r;
    if(r>=mxn)
        r=mxn-1;
    if(l>=mxn)
        l=mxn-1;
    cout<<c[r]-c[l-1]<<"\n";
}
return 0;}
