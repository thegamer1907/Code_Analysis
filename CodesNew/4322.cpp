#include<iostream>
#include<string>
using namespace std;
string s[500005];
string z[500005];
int main()
{
	int a,b,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	z[n-1]=s[n-1];
	for(int i=n-2;i>=0;i--)
	{
		a=s[i].length();
		b=z[i+1].length();
		for(int j=0;j<b&&j<a;j++)
		{
		    if(s[i][j]<z[i+1][j])
			{
		    	z[i]=s[i];
		    	break;
		    }
		    else if(s[i][j]==z[i+1][j])
			{
				z[i]+=s[i][j];
			}
		    else 
			{
				break;
			}
		}
		
	}
	for(int i=0;i<n;i++)
	{
		cout<<z[i]<<endl;
	}
}