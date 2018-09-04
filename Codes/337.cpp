#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
	ll n,arr[100000],m,jui[100000],sum=0;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
	cin>>arr[i];
	sum+=arr[i];
	arr[i]=sum;
    }
    cin>>m;
    for(ll i=0;i<m;i++)
    cin>>jui[i];
    for(ll i=0;i<m;i++)
    {
    	ll lo=0,hi=n-1,mid;
    	while(lo<hi)
    	{
    		mid=lo+(hi-lo)/2;
    		if(arr[mid]<jui[i])
    		lo=mid+1;
    		else
    		hi=mid;
		}
		cout<<hi+1<<endl;
	}
	return 0;
}
