#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define mp make_pair
#define mod (ll)1000000009
#define f first
#define s second
#define inf (ll)1e15
#define pi pair<int,int>
#define pb push_back
#define mxn 100010

int main() {
sp;
int n;
cin>>n;
vector<int> a(n);
for(int i=0; i<n; ++i){
    cin>>a[i];
    if(i)
    a[i]+=a[i-1];
}
int q,x,id,l,r,m;
cin>>q;
while(q--){
    cin>>x;
    l=0,r=n-1;
    while(l<=r){
        m=(l+r)>>1;
        if(a[m]<x) l=m+1;
        else r=m-1;
    }
    cout<<l+1<<"\n";
}
return 0;}
