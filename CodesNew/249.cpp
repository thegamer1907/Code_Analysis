#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ll n, t;cin>>n>>t;
   ll a[n+100];
   for(ll i=0;i<n;i++)cin>>a[i];
   ll s=0,c=0,mx=0,j=0;
   for(ll i=0;i<n;i++){
        s+=a[i];
        if(s>t){
          s-=a[j];j++;
        }
        else{
                c++;
            mx = max(c,mx);
        }
   }
   if(mx==0){
    cout<<mx<<endl;return 0;
   }
   cout<<max(c,mx)<<endl;
}
