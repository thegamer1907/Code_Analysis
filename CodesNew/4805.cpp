#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1E6;
ll arr[N],n;
ll possible(ll mid)
{
  ll i = 0,j = mid;
  while(i<mid&&j<n)
  {
    ll val = arr[j];
    ll lval = arr[i]*2;
    if(lval<=val)
    {
      i++;
      j++;
    }
    else 
      j++;
  }
 if(i==mid) return 1;
 else return 0;
}
ll binary_search(ll l,ll r)
{
  ll mid = -1;  
  while(l<=r)
  {
    if(mid==(l+r)/2) break;
    mid = (l+r)/2;
    if(possible(mid)) l = mid;
    else r = mid;
  }
  if((mid+1)<n)
    if(possible(mid+1)) 
      mid+=1;
  return mid;
}
int main()
{ 
  cin>>n;
  for(ll i=0;i<n;i++) cin>>arr[i];
  sort(arr,arr+n);
  ll cnt = binary_search(0,n);
  cout<<(n-cnt);
  return 0;
}
