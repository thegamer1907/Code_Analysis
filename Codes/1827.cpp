#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<math.h>
#include<iomanip>
#include<string.h>
#include<limits>
#include<queue>
#include<set>
using namespace std;
typedef long long int llt;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
  llt n,m,k;
  cin>>n>>m>>k;
  llt l=0,r=250000000001,x=0,mid,cnt,c,i;
  while(l<=r){
    mid=(l+r)/2;
    cnt=0;
    for(i=1;i<=n;i++){
      cnt+=min((mid-1)/i,m);
    }
    if(cnt<=k-1){
      c=mid;
      l=mid+1;
    }
    else{
      r=mid-1;
    }
  }
  cout<<c<<endl;
  return 0;
}
