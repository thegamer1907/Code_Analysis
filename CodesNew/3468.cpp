#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,count=0,max=-1,dd;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>dd;
		if(dd>max)
			max=dd;
		count+=dd;
	}
	if(max<=ceil((count+m)/(float)n))
		cout<<ceil((count+m)/(float)n)<<" "<<max+m<<endl;
	else
		cout<<max<<" "<<max+m<<endl;
} 