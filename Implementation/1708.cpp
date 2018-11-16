#include<iostream>
#include<string>
using namespace std;
int main ()
{
	string s;
	cin>>s;
	size_t pos,pos1;
	pos=s.find("0000000");
	pos1=s.find("1111111");
	if(pos != string::npos)
	cout<<"YES";
	else if(pos1 != string::npos)
	cout<<"YES";
	else cout<<"NO";
	
	
	
	return 0;
}
