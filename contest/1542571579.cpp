#include <iostream>
using namespace std;
string a[101];
int main()
{
	string answer="";
	int n,i,j,k;
	bool ans=false;
	cin>>answer>>n;
	for(i=0;i< n ; i ++)
	{
		cin>>a[i];
		if(a[i]==answer)
		{
			ans=true;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(ans==true)
		{
			break;
		}
		for(j=0;j<n ;j++)
		{
			if((a[i])[1]==answer[0] && (a[j])[0]==answer[1])
			{
				ans=true;
				break;
			}
		}
	}
	if(ans==true)
	{
		cout<<"YES";
	}
	else
	{
		cout<< "NO";
	}
	return 0;
}
