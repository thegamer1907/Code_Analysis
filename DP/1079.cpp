#include<bits/stdc++.h>
#define lli  long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
const int mod=1e9+7;
int main()
{
	fast;
	lli n,x,cnt1=0,cnt0=0,cntmax0=-1;
	cin>>n;
	while(n--){
		cin>>x;
		if(x==1)
		{
			cnt1++;
			if(cnt0>0){
				cnt0--;
			}
		}
		else if(x==0){
			cnt0++;
			if(cntmax0<cnt0)
				cntmax0=cnt0;
		}
	}
	cout<<cnt1+cntmax0;
}
