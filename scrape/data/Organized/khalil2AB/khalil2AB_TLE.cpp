//author : Khalil Baydoun
#include<bits/stdc++.h>
using namespace std;
// std::vector<long long>::iterator low,up;
 // low=std::lower_bound (v.begin(), v.end(), 20);
 long long mval=1000000000;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
  mval=mval*mval;
long long n,m,k;
cin>>n>>m>>k;
vector<long long>a;
for(long long i=0;i<m;i++){
  long long temp;
  cin>>temp;
  a.push_back(temp);
}
long long ans=0;
long long t;
long long e=k;
/*
while(a.size()>0){

   std::set<long long>::iterator low;
   low=std::upper_bound (a.begin(), a.end(), e);
   t=distance(a.begin(),low);
   
   ans++;
   e+=t;
   for(long long i=0;i<t;i++){
     a.erase(a.begin());
   }
   
   
}
*/
std::vector<long long>::iterator low,high;
low=a.begin();
int count=0;
while(count<m){
  if(*a.begin()>e){
    long long s1=1,e1=*a.begin()/k+100;
    long long ans1=mval;
    while(s1<=e1){
      long long mid=(s1+e1)/2;
      if(e+mid*k>=*a.begin()){
        ans1=min(ans1,mid);
        e1=mid-1;
      }
      else s1=mid+1;
    }
    e+=ans1*k;
    continue;
  }
  if(count==m-1){
    ans++;
    break;
  }
   high=std::upper_bound (low, a.end(), e);
   t=distance(low,high);
   low=high;
   ans++;
   e+=t;
   count+=t;
}
cout<<ans<<endl;
 
 
 
 
 
}