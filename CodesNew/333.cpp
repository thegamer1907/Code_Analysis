#include<bits/stdc++.h>
using namespace std;


int main(){
  int n,t;
  cin >> n >> t;
  int sum=0,cnt=0,m,ans=0;
  queue<int>q;
  for(int i=1;i<=n;i++){
     cin >> m;
     sum=sum+m;
     cnt++;
     q.push(m);
     while(!q.empty() && sum>t){
       sum=sum-q.front();
       cnt--;
       q.pop();
     }


    ans=max(cnt,ans);
  }
 cout << ans <<endl;

 return 0;
}
