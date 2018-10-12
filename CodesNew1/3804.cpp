#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
lli n,x,y;
vector<lli>v;
bool check(lli x,lli mini) {
	lli p,q,ans=0;
  if(x<mini){
    return 0;
  }
	for(lli i=1;i<=n;i++) {
		ans+=(x-v[i]);
	}
  if (ans>=x) return 1;
	return 0;
}
lli binary_search_on_answer(lli mini){
  lli l = 0;
	lli r = 1e10;
	lli ans = 1;
	while (l<=r) {
		lli g = (l+r)/2;
		if (check(g,mini)) {
			ans = g;
			r = g-1;
		} else l  = g+1;
	}
	return ans;
}
int main(){
  _
  cin>>n;
  v.push_back(0);
  lli maxi=INT_MIN;
  for(lli i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
    maxi=max(maxi,x);
  }
  y=binary_search_on_answer(maxi);
  // if(n==100){
  //   cout<<maxi<<endl;
  // }
  cout<<y<<endl;
}
