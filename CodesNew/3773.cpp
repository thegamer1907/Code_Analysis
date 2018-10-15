
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll unsigned long long int
 
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

  	int n,m;
  	cin>>n>>m;
  	int a[n],i,maxi=0,mini=10000;
  	for(i=0;i<n;i++) {
  		cin>>a[i];
  		if(a[i]>maxi)
  			maxi=a[i];
  		if(a[i]<mini)
  			mini=a[i];
  	}
  	int sum=0;
  	for(i=0;i<n;i++)
  	{
  		sum+=maxi-a[i];
  	}
  	int minn,maxx;
  	if(sum<=m) {
  		maxx=maxi+m;
  		m-=sum;
  		minn=maxi;
  		minn+=(m/n);
  		m-=n*(m/n);
  		if(m>0)
  		minn++;
  		
  		cout << minn << " " << maxx;
  	}
  	else {
  		minn=maxi;
  		maxx=maxi+m;
  		cout << minn << " " << maxx;
  	}

    return 0;

}