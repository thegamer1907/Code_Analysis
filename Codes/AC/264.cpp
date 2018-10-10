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
int q,x,id;
cin>>q;
while(q--){
    cin>>x;
id=lower_bound(a.begin(),a.end(),x)-a.begin();
    cout<<id+1<<"\n";
}
return 0;}
