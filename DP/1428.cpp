#include<bits/stdc++.h>
using namespace std;
int a[101],n,cnt,t,k;
int main()
{
    cin>>n;
    for (int i=0;i<n;i++)
    {
    	cin>>a[i];
    	if (a[i]==1) cnt++;
	}
	for (int i=0;i<n;i++)
	{
		if (a[i]==1) k--;
		else k++;
		t=max(t,k);
		if (k<0) k=0;
	}
	if (t>0) cout<<t+cnt;
	else cout<<cnt-1;
    return 0;
}
