#include<map>
#include<iostream>
#include<set>
#include<iterator>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector <char> v, v1;
	char a,b;
	cin>>a>>b;
	int n,k=0,k2=0,k3=0;
	cin>>n;
	string str;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		for(int i=0;i<str.size();i++)
		{
			if((str[i]==a && str[i+1]==b) || (str[i]==b && str[i+1]==a)) k3++;
			if(str[i]==a) v.push_back(i);
			if(str[i]==b) v1.push_back(i);
		}
	}
	for(int i=0;i<v.size();i++)
	for(int i=0;i<v1.size();i++)
	{
		if(v[i]==1) k++;
		if(v1[i]==0) k2++;
	}
	if((k>=1 && k2>=1) || k3>0) cout<<"YES";
	else cout<<"NO";
	return 0;
}