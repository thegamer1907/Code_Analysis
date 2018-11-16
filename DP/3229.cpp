#include<bits/stdc++.h>
using namespace std;
#define MAX 105
#define ll long long int

int main()
{
    ll n,a[MAX],b,ne[MAX],no[MAX],i,sum=0;
    vector<ll> pr;
    ne[0]=0; no[0]=0;
    cin>>n>>b;
    for(i=1;i<=n;i++)
    {
    	cin>>a[i];
    	ne[i]=ne[i-1]; no[i]=no[i-1];
    	if(a[i]%2==0) ne[i]++;
    	else no[i]++;
    }
    for(i=1;i<n;i++)
    if(ne[i]==no[i])
	pr.push_back(abs(a[i]-a[i+1]));

    if(pr.size()!=0)
    {
	    sort(pr.begin(),pr.end());
	    for(i=0;i<pr.size();i++)
	    {
	    	sum+=pr[i];
	    	if(sum>b)
	    	break;
	    }
	    cout<<i;
	}
	else
		cout<<"0";
    return 0;
}
