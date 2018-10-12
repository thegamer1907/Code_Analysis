#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n,m,sum=0,x,ans=-10;
  cin>>n>>m;

  queue<long long>q;

  for(int i=0 ; i<n ; ++i){
  scanf("%lld",&x);
  sum += x;
  q.push(x);
  if(sum>m)
  {
    ans = max(ans , (long long)q.size()-1);
    sum -= q.front();
   q.pop();
  }
  
  


}
ans = max(ans,(long long)q.size());


cout<<ans;
}