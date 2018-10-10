#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int i;
	int ar[100005];
	cin>>n;
	for(i=0;i<n;++i)
	cin>>ar[i];
	for(i=0;i<n;++i)
	{
		ar[i]-=(i);
		if(ar[i]>0){
		ar[i]=ceil(ar[i]/(n*1.0));
		}
	}	
		
	int mini=ar[0];
	int pos=0;
	for(i=1;i<n;++i)
	{
		if(mini<=0)
		break; 
		if(mini>ar[i])
		{
			mini=ar[i];
			pos=i;
		}
	}
	cout<<pos+1<<endl;
}