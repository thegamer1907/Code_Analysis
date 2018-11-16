//1029B
#include <bits/stdc++.h>
using namespace std;
int main()
{    
	int n,i,ele,res=1,max=1;
	cin>>n;
	vector <int> dif;
	for(i=0;i<n;i++)
	{
		cin>>ele;
		dif.push_back(ele);
	}
	for(i=0;i<n-1;i++)
	{
		if(dif[i+1]>2*dif[i])
		{
			//cout<<dif[i]<<endl;
			if(res>max)
			    max=res;
			res=1;
			//cout<<"abd";
			continue;
		}
		res+=1;
		//cout<<dif[i]<<' '<<res<<' ';
	}
	if(res>max)
	    max=res;
	cout<<endl<<max;
	return 0;
}