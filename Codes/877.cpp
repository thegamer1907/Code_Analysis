/// ANTI_LGIHT ///

#include <bits/stdc++.h>

using namespace std;

#define int long long int 

main()
{
	ios_base::sync_with_stdio(false);
	
	int n,k;
	cin>>n>>k;
	int f=1;

	if(k%2==1)
	{
		cout<<1;
		return 0;
	}

	for(int i=1;i<=n;i++)
	{
		int t=k-(f<<(i-f));
//		cout<<i<<" "<<t<<endl;
		if(t%(f<<i)==0 or t==0)
		{
			cout<<i;
			return 0;
		}
	}
	return 0;
}





