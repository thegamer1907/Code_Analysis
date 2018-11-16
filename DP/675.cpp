//int -> ll
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	string str;
	int m,res,i,n,index,l,r;
	cin>>str;
	n=str.size();
	vector<int >a(n+1);
	index=0;
	a[index++]=0;
	a[index++]=0;
	for(i=1;i<n;i++)
	{
		a[index]=a[index-1];
		if(str[i]==str[i-1])
		{
			a[index]++;
		}
		//cout<<a[index]<<endl;
		index++;
		
	}
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>l>>r;
		res=a[r]-a[l];
		cout<<res<<'\n';
	}
	return 0;	
}

