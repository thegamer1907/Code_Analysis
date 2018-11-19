#include <bits/stdc++.h>
using namespace std;
#define SYNC ios_base::sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;
#define inf 0x3f3f3f3f
#define INF 1000111000111000111LL
#define mod 1000000007
#define pi acos(-1.0)
#define eps 1e-8
#define endl '\n'
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define fi first
#define se second
#define all(cc) (cc).begin(),(cc).end()
using lli = long long int ;
using pii = pair<int, int> ;
using vi = vector<int> ;
using vb = vector<bool> ;
using vvi = vector<vector<int>> ;
using vlli = vector<long long int> ;
using vpii = vector<pair<int, int>> ;
int main(){
SYNC
int h,m,s,ta,tb;
cin>>h>>m>>s>>ta>>tb;
double dh,dm;
dh=h*1.0+(m*1.0)*(1.0/60)+(s*1.0)*(1.0/3600);
dm=m*1.0+(s*1.0)*(1.0/60);
int small=0,large=0;
if(ta<tb){
	int temp=ta;
	ta=tb;tb=temp;
}
if(dh<ta && dh>tb) small++;
else large++;
if(dm<5*ta && dm>5*tb) small++;
else large++;
if(s<ta*5 && s>tb*5) small++;
else large++;

if(!small || !large) cout<<"YES";
else cout<<"NO";







return 0;
}