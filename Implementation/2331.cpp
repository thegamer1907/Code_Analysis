#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string str;
	cin>>n;
	cin>>str;
	int j,res=0,i;
	for(i=0;i<n;)
	{
		j=i+1;
		while(j<n&&str[i]==str[j])
		{
			j++;
			res++;
		}
		i=j;
	}
	cout<<res<<endl;
	return 0;
}
