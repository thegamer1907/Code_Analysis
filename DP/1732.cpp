#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
	bool done=false;
	string input;
	cin>>input;
	int size=input.size();
	int AB=input.find("AB");
	int BA=input.find("BA");
	if (AB<0||BA<0)
	{
		cout<<"NO"<<endl; return 0;}
	if (AB-BA==1||BA-AB==1)
	{
		int less=min(AB,BA);
		string find=input.substr(less+3,size-less-3);
		int AB2=find.find("AB");
	    int BA2=find.find("BA");
		if (AB2<0&&BA2<0)
			{cout<<"NO"<<endl; return 0;}
		else
			{cout<<"YES"<<endl; return 0;}
	}
	else
		cout<<"YES"<<endl; return 0;
}