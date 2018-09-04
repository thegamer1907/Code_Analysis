#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
ll n,s;
ll arr[100001];

ll solve(int num){
  ll cp[100001];
  for (int i=0;i<n;i++)
    cp[i]=arr[i]+num*(i+1);
  sort(cp,cp+n);
  ll temp=0;
  for (int i=0;i<num;i++){
    temp+=cp[i];
  }
  return temp;
}

int main()
{
  int i;
  cin>>n>>s;
  for (i=0;i<n;i++)
    cin>>arr[i];
  int low=-1,high=n+1,mid,ans;
  ll cost,anscost;
  while (low+1<high){
    mid=(low+high)/2;
    cost=solve(mid);
    if (cost<=s && cost>=0){
      ans=mid;
      anscost=cost;
      low=mid;
    }
    else
      high=mid;
  }
  ll sum=0;
  cout<<ans<<' '<<anscost<<endl;
  return 0;
}
