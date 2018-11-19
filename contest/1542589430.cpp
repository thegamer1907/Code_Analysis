#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	string pass;
	cin>>pass;
	cin>>t;
	n=t;
	cin.ignore();
    string p[110];
    int i=0,flag=0;
	while(t--)
	{
		cin>>p[i];
		if(p[i]==pass)
		   flag=1;
		i++;
	}
	int count1=0,count2=0;
	for(int i=0;i<n;i++)
	{
		if(p[i][0]==pass[1])
		  count1++;
		if(p[i][1]==pass[0])
		  count2++;
	}
	if(count1>=1 && count2>=1)
    {
    	flag=1;
	}
	if(flag==1)
	  cout <<"YES\n";
	else
	  cout<<"NO\n";
	return 0;

	
}