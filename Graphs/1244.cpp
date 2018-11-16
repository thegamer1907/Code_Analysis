#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int>v;
	int numofcell;
	int indofcell;
	int flag=0;
	int b[40000];


	cin >> numofcell >> indofcell;

	for(int i=1;i<numofcell;i++)
	{
		cin >> b[i];
	}
	
	v.push_back(1);

	for(int i=1;i<numofcell;i++)
	{
     v.push_back(b[i]+i);
     i=b[i]+i-1;
	}
	for(auto x=v.begin();x!=v.end();x++)
	{
		if(*x==indofcell)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout <<"NO";
	}
	if(flag==1)
	{
		cout <<"YES";
	}

	return 0;
    
}