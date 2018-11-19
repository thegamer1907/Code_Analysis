#include<iostream>
#include<cstring>
using namespace std;

#define MAXN 100+5
string hope,str[MAXN];
int n;

int main()
{
	cin>>hope;
	cin>>n;
	for(int i=1;i<=n;i++)
	    cin>>str[i];
	
	for(int i=1;i<=n;i++)
	    for(int j=1;j<=n;j++)
	    {
	    	string temp=str[i]+str[j];
	    	
	    	if(temp.find(hope)!=string::npos)
	    	{
	    		cout<<"YES";
	    		return 0;
			}
		}
	
	cout<<"NO";
	return 0;	
}
