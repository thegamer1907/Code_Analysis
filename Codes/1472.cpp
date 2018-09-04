#include <bits/stdc++.h>

using namespace std;

const int maxn=1e5+10;
int N,S;
int T;
struct Node{
  int val,idx;
  bool operator<(const Node&rhs)const{
    return val+T*idx<rhs.val+T*rhs.idx;
  }
}arr[maxn];
int main(){
  scanf("%d%d",&N,&S);
  for(int i=1;i<=N;i++){
    scanf("%d",&arr[i].val);
    arr[i].idx=i;
  }
  long long ans=0;
  long long pre=0;
  for(int i=1;i<=N;i++){
    T=i;ans=0;
    nth_element(arr+1,arr+i,arr+N+1);
    for(int j=1;j<=i;j++){
      ans+=arr[j].val+T*arr[j].idx;
    }if(ans>S){
      printf("%d %lld\n",i-1,pre);
      return 0;
    }
    pre=ans;
  }
  printf("%d %lld\n",N,pre);
}
