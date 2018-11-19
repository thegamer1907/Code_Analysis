#include<iostream>
using namespace std;
int n;
string s[200],t;
int main()
{
	cin>>t>>n;
	for(int i=0;i<n;i++)cin>>s[i];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(s[i][s[i].size()-1]==t[0]&&s[j][0]==t[1]){cout<<"YES"<<endl;return 0;}
	for(int i=0;i<n;i++)
		if(s[i]==t){cout<<"YES"<<endl;return 0;}
	cout<<"NO"<<endl;
	return 0;
}
