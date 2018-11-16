#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int vt = 0,a[100009]={0},i=0,b[100009]={0},j=0;
	cin>>s;
	while(s.find("AB",vt)!=-1)
	{
		a[i] = s.find("AB",vt);
		vt = s.find("AB",vt)+1;
		i++;
	}
	vt =0;
	while(s.find("BA",vt)!=-1)
	{
		b[j] = s.find("BA",vt);
		vt = s.find("BA",vt)+1;
		j++;
	}
	if (i==0 || j==0)
	{
		cout<<"NO";
		return 0;
	}
	else
	{
		for (int x = 0;x<i;x++)
			for (int y=0;y<j;y++)
				if (a[x]!=b[y]-1 && a[x]!=b[y]+1)
				{
					cout<<"YES";
					return 0;
				}
	}
	cout<<"NO";
	return 0;
}
