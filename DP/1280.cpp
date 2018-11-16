#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
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
int main(){
int n;
cin>>n;
bool flag=0;
char s[n];
int cnt=0;
rep(i,n){
cin>>s[i];
if(s[i]=='1')
cnt++;
}
if(cnt==n){
cout<<n-1<<endl;
return 0;
}
int mx=0,val=0,mne=n-1;
rep(i,n){
if(s[i]=='1')
val--;
else
val++;
if(mx<val){
mx=val;
mne=i;
}
if(val<0){
val=0;
}
}
val=0;cnt=0;
per(i,n){
if(i<=mne && !flag){
if(s[i]=='0')
cnt++;
else
cnt--;
if(cnt==mx)
flag=1;
}
if(s[i]=='1')
val++;
}
cout<<val+mx<<endl;
}
//overflow ll vs int
//overflow during multiplication
//check division
