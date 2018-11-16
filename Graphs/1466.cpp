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
int sum=0,m,t;
cin>>m>>t;
int a[m-1];
rep(i,m-1)
cin>>a[i];
while(sum<m-1){
sum+=a[sum];
if(sum==t-1){
cout<<"YES"<<endl;
return 0;
}
}
cout<<"NO"<<endl;
}
//overflow ll vs int
//overflow during multiplication
//check division
