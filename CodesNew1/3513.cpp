#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(s,e,st) for(int i=s;i<=e;i+=st)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
using namespace std;
const int N=111;
int a[N],n,m;
bool ok(int x){
 ll ans=0;
 for(int i=0;i<n;i++){
    ans+=1ll*x-a[i];
 }
 return ans>=m;
}
int main(){
sc(n);sc(m);
read_arr(a,0,n);
sort(allr(a,n));
int l=a[n-1],h=a[n-1]+m,mid;
while(l<h){
  mid=(l+h)/2;
  if(ok(mid)){h=mid;}
  else{l=mid+1;}
}
printf("%d %d\n",l,a[n-1]+m);
return 0;
}
