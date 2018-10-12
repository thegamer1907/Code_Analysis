#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define lp(n) for(int i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,ansmax,ansmin;
    cin>>n>>k;
    int arr[n];
    int mink,maxk;
    lp(n)
    	cin>>arr[i];
    mink=arr[0];
    maxk=mink;
    int reldiff=0;
    lp(n)
    {
    	mink=min(arr[i],mink);
    	maxk=max(arr[i],maxk);
    }
    lp(n)
    	reldiff+=maxk-arr[i];
    ansmax=maxk+k;
    ansmin=mink;
    if(k>=reldiff)
    {
    	k-=reldiff;
    	mink=maxk;
    	mink+=(k/n);
    	k%=n;
    	if(k!=0)
    		mink++;
    	ansmin=mink;
    }
    else
    {
    	ansmin=maxk;
    }
    cout<<ansmin<<" "<<ansmax<<endl;
    return 0;
}