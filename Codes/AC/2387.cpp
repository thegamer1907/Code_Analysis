#include <bits/stdc++.h>
using namespace std;
const int N=10000001;
int a[N];
bool b[N];
int ans[N];
int main(){
  int n,m,x,y,i,j;
  scanf("%d",&n);
  while(n--){
    scanf("%d",&x);
    a[x]++;
  }
  for(i=2; i<N; i++){
    ans[i]=ans[i-1];
    if(b[i])continue;
      ans[i]+=a[i];
      j=2*i;
      while(j<N){
        ans[i]+=a[j];
        b[j]=true;
        j+=i;
      }
  }
  scanf("%d",&m);
  while(m--){
    cin >> x >> y;
     if(x>=N && y>=N){
       cout << 0 << endl;
       continue;
     }
     if(x>=N){
       x=N-1;
     }
     if(y>=N){
       y=N-1;
     }
     cout << ans[y]-ans[x-1] << endl;
   }
}
