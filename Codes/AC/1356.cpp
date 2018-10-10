#include <iostream>
#include <algorithm>
#define lli long long int
using namespace std;
lli n,b,base[100001]={},tmp[100001]={};
int solve(int k_)
{
	lli i,temp=0;
	for(i=0;i<n;i++)tmp[i]=base[i]+(i+1)*k_;
	partial_sort(tmp,tmp+k_,tmp+n); i=0;
	while(i<k_ && temp<=b)temp+=tmp[i++];
	return temp;
}
int main()
{
	lli i,k,l=0,r;
	cin>>n>>b; r=n;
	for(i=0;i<n;i++)cin>>base[i];
	while(l<=r)
	{
		k=(l+r)>>1;
		i=solve(k);
    //cout<<k<<" "<<i<<"\n";
		if(i==b){r=k;break;}
		if(i<b)l=k+1;
		else r=k-1;
	}
	cout<<r<<" "<<solve(r)<<"\n";
}