// this is my basic template
#include<bits/stdc++.h>
using namespace std;
#include <string.h>
typedef int64_t ll;
typedef long double ld;
#define pinf 1e15;
#define ninf (-1)*(1e15);
#define mod 1000000007
#define pb push_back
#define mp make_pair
using namespace std;
#define rep(i,a,b) for(ll i=a;i<=b;++i)
#define rev(i,a,b) for(ll i=a;i>=b;i--)
#include <cstdlib>
// cout<< fixed << setprecision(6) <<(sum/(n-pos))<<endl;

bool comp(int a, int b) 
{ 
    return (a < b); 
} 
//  ll first=*max_element(a.begin(),a.end());

ll nCr(ll n,ll r){
  ll temp1=1,temp2=1;
  rep(i,r+1,n){
    temp1*=i;
  }
  rep(i,1,n-r){
    temp2*=i;
  }
  return (temp1/temp2);
}

int main()
{
   ios_base::sync_with_stdio(false);
        cin.tie(NULL);     
  ll n,m,k;
  cin>>n>>m>>k;

  ld d=k;
bool check=false;
  ll count=0,ans=0;
  ll temp_count=0;
  rep(i,1,m){
    // cout<<"i "<<i<<endl;
    ll temp;
    cin>>temp;
    // cout<<count<<" ** "<<k<<endl;
    if((temp-count)<=k){
      // ans++;
      if(!check){
        check=true;
        ans++;
      }      // check=true;
      // count++;
      temp_count++;
    }
    else{
      count+=temp_count;
      temp_count=1;
      // if(!check){
        check=true;
      //   ans++;
      // }
      ll deepak=ceil(((temp-count))/d);
      k=deepak*d;
      // cout<<"deepak == "<<deepak<<endl;
      // count++;
      ans++;
    }
    // cout<<" == ="<<ans<<endl;
  }
// if(m==0)
//   cout<<"0"<<endl;
// else
  cout<<ans<<endl;

    return 0;

    
}