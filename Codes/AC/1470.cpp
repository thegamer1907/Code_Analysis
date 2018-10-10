#include <bits/stdc++.h>

using namespace std;

const int maxn=1e5+10;
long long N,S;
int T;


struct Node{
  int val,idx;
  bool operator<(const Node&rhs)const{
    return val+T*idx<rhs.val+T*rhs.idx;
  }
}arr[maxn];


int main(){
  scanf("%lld%lld",&N,&S);
  for(int i=1;i<=N;i++){
    scanf("%d",&arr[i].val);
    arr[i].idx=i;
  }
  long long ans=0;
  long long pre=0;
  int l=0,r=N;
  while(l<=r){
    int i=(l+r)>>1;
    T=i;ans=0;
    sort(arr+1,arr+N+1);
    for(int j=1;j<=i;j++){
      ans+=1LL*arr[j].val+1LL*T*arr[j].idx;
    }
    if(ans>S){
      r=i-1;
    }
    else {
      pre=ans;
      l=i+1;
    }
    
  }
  printf("%d %lld\n",r,pre);
  
  
}

