#include<bits/stdc++.h>
using namespace std;
main()
{
	int c,d;
	cin>>c>>d;
	int arr[c+1];
	for(int i=1;i<c;i++)cin>>arr[i];
	 int next,m=1,j;
	 arr[c]=1;
	for(j=1;j<=c;j+=arr[j])
	{
	
	//	cout<<next;
		
		if(j==d)
		{
			m=0;
			break;
		}
		if(j>d)break;
	}
	if(m==0||j==d)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
	
}