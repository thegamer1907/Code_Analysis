#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define rep1(i,m,n) for(int (i)=(m);(i)<(n);(i)++)
#define per(i,n) for(int (i)=(n)-1;(i)>=0;(i)--)
#define per1(i,m,n) for(int (i)=(n)-1;(i)>=(m);(i)--)
#define len(s) (int)(s).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define maxm 1e5+7
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
using namespace std;
bool a[100010];
int cnt[100010];
int main(){
ios::sync_with_stdio(false);
cin.tie(NULL);
//overflow ll vs int
//operations problem
//look at the constraints again
int n,m;
cin>>n>>m;
int b[n];
rep(i,n){
cin>>b[i];
}
per1(i,1,n+1){
int x;
x=b[i-1];
if(!a[x]){
a[x]=1;
cnt[i]=cnt[i+1]+1;
}
else
cnt[i]=cnt[i+1];
}
rep(i,m){
int x;
cin>>x;
cout<<cnt[x]<<endl;
}
}



