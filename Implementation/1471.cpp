#include<iostream>
using namespace std;
int main()
{
	string s;	cin>>s;
	string s1="0000000", s2="1111111";
	if(s.find(s1)!=string::npos)	cout<<"YES";
	else if(s.find(s2)!=string::npos)	cout<<"YES";
	else	cout<<"NO";
	return 0;
}