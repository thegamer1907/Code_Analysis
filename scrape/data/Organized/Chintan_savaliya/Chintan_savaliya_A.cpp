#include<bits/stdc++.h>
#define ll long long int
#define M 1000000007
using namespace std;
ll n,t,m,k;
int main(){
      cin>>n>>m>>k;
      ll last=k,tl=0,x,cnt=0;
      ll a[m];
      for(int i=0;i<m;i++){
        cin>>a[i];
      }
      for(int i=0;i<m;i++){
        if(a[i]<=last) tl++;
        else{
         last+=tl,cnt+=(tl!=0),tl=0;
         if(last<a[i]) last+=k*((a[i]-last)/k+1-!((a[i]-last)%k));
         tl++;
        }
      }
      if(tl)cnt++;
      cout<<cnt;
      
}