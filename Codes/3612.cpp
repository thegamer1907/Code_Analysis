#include<bits/stdc++.h>
#define faster ios::sync_with_stdio(false);cin.tie(0);
#define lld long long int
#define vi vector< lld >

using namespace std;

int main(){

  faster
  lld n,m,k;
  cin>>n>>m>>k;
  
  vi first_effect(m),first_point(m),second_effect(k),second_point(k);
  
  lld x,s;
  cin>>x>>s;
  
  lld minm = x*n;
  
  for(int i= 0;i<m;i++) cin>>first_effect[i];
  for(int i =0;i<m;i++) cin>>first_point[i];
  for(int i= 0;i<k;i++) cin>>second_effect[i];
  for(int i = 0;i<k;i++) cin>>second_point[i];
  
  for(int i = -1;i<m;i++){
    
    lld potions = n,points = s,time = x;
    if(i>=0 && points >= first_point[i])
      points = points-first_point[i],
      time = first_effect[i];
    
    lld index = upper_bound(second_point.begin(),second_point.end(),points)-second_point.begin();
    if(index > 0)
      potions = max((lld)0,potions-second_effect[index-1]);
    minm = min(minm,potions*time);
  }
  cout<<minm<<endl;

}
