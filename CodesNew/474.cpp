#include <iostream>

using namespace std;
long long n,t,l=1,r=1,a[100005],sum=0,ans=0;
int main() {
    cin>>n>>t;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        a[i]+=a[i-1];
    }
    while(r<=n && l<=n){
        sum=a[r]-a[l-1];
        if(sum<=t){
            ans=max(ans,r-(l-1));
            r++;
        }
        else{
           if (l==r) 
           {
               r++;
               l++;
               
           }
           else l++;
        }
    }
  
    cout<<ans;
    return 0;
}