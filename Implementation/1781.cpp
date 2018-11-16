#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]==a[i+1]&&a[i]==a[i+2]&&a[i]==a[i+3]&&
		a[i]==a[i+4]&&a[i]==a[i+5]&&a[i]==a[i+6])
		{
		cout<<"YES";
		return 0;}
		
}
cout<<"NO";
    }