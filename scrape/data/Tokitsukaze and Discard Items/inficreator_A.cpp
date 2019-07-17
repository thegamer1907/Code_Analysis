#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979323846
#define pii pair<int,int >
#define eb  emplace_back
#define all(v)  v.begin(),v.end()
#define pll pair<ll,ll>
#define mii map<int,int >
#define mll map<ll,ll>
#define mp make_pair
#define ll  long long int 
#define vi vector<int >  
#define vll vector< long long int >
#define rep(i,a,b) for(__typeof(b) i=a ;i<b;i++)
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define in(i,a,b) __typeof(b) a[b]; for(__typeof(b) i=0;i<b;i++) cin>>a[i]

void solve(){
ll n,m,k;
cin>>n>>m>>k;
in(i,a,m);
ll sub=0;
ll b=1,t=0,f=1,ans=0;
for(int i=0;i<m;i++){
    if(a[i]-t<=b*k){//cout<<i <<1<<endl;
    sub++; f=0;}
    else{
        if(f){//cout<<i <<2<<endl;
         b=(a[i]-t+k-1)/k;i--;continue;}
        ans++;//cout<<i <<3<<endl;
        t+=sub;sub=0;i--;f=1;
        
    }
    
}
if(sub)
ans++;
  cout<<ans;  
}


 int main(){
 ios;
//int t;cin>>t;
//while(t--)
   solve();
    return 0;
}