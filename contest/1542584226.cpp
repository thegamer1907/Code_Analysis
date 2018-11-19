//http://codeforces.com/contest/868/problem/0?locale=en
//A. Bark to Unlock
#include <iostream>
#include <string>
using namespace std;
string s;
int i,n,j;
int main(int argc, char** argv) {
	cin>>s;
	if('A'<=s[0] && s[0]<='Z')
			s[0]+=32;
	if('A'<=s[1] && s[1]<='Z')
			s[1]+=32;
	//cout<<s<<endl;		
	cin>>n;
	string a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if('A'<=a[i][0] && a[i][0]<='Z')
			a[i][0]+=32;
		if('A'<=a[i][1] && a[i][1]<='Z')
			a[i][1]+=32;	
	}
	for(i=0;i<n;i++)
	{	if( (s[0]==a[i][0] && s[1]==a[i][1])	||
			(s[0]==a[i][1] && s[1]==a[i][0]))
			{  		cout<<"YES";
			   		return 0;
			}
	
		for(j=i+1;j<n;j++)
			if((s[0]==a[i][1] && s[1]==a[j][0]) ||
			   (s[0]==a[j][1] && s[1]==a[i][0]) ||
			   (s[0]==a[i][0] && s[1]==a[i][1])	||
			   (s[0]==a[i][1] && s[1]==a[i][0]))
			{  		cout<<"YES";
			   		return 0;
			}
	}
	cout<<"NO";		
	return 0;
}