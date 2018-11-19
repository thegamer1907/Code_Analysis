#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<math.h>
#include<iomanip>
#include<string.h>
#include<limits>
#include<queue>
typedef long long int llt;
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin>>s;
	llt n;
	cin>>n;
	llt i,i1=0,i2=0;
	for(i=0;i<n;i++)
	{
		string x;
		cin>>x;
		if(x[0]==s[0]&&x[1]==s[1])
		{
			i1=1;
			i2=1;
			break;
		}
		else if(x[0]==s[1]&&x[1]==s[0])
		{
			i1=1;
			i2=1;
			break;
		}
		else if(s[0]==x[1])
			i1=1;
		else if(s[1]==x[0])
			i2=1;
	}
	if(i1==1&&i2==1)
		cout<<"YES"<<endl;
	else 
		cout<<"NO"<<endl;
}
