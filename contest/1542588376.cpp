#include<bits/stdc++.h>
using namespace std;
string pass1;
string pass2;
vector<string>orhan;
int control(string a,string b)
{
	int cnt=0;
	if(a==b)
	return 1;
	else{
		int size1=a.size();
		int size2=b.size();
		if(size1==size2)
		{
			for(int i=0;size1>i;i++)
			{
			if(a[i]!=b[i])
			{
				cnt++;
				break;
				}	
			}
			if(cnt==0)
			return 1;
			else  return 0;
				}		
		else return 0;
	}
	
	
}
int main()
{
	cin>>pass1;
	int k;
	string temp;
	cin >> k;
	for(int i=0;k>i;i++)
	{
		cin>>temp;
		orhan.push_back(temp);
	}
	int size=orhan.size();
	for(int i=0;size>i;i++)
	{
		int batman=control(pass1,orhan[i]);
		if(batman==1)
		{
			cout<<"YES";
			exit(0);
		}
	}
	int klm=0;
	for(int i=0;size>i;i++)
	{
		if(pass1[0]==orhan[i][1])
		{
			klm++;
			break;
		}
		
	}
	for(int i=0;size>i;i++)
	{
		if(pass1[1]==orhan[i][0])
		{
			klm++;
			break;
		}
	}
	if(klm==2)
	cout<<"YES";
	else cout<<"NO";	

}