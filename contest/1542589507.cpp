#include <bits/stdc++.h>
#include <cstring>
#include <climits>
using namespace std;
#define ll long long 
#define VI vector<ll>
#define VII vector<VI>
#define MAX_INT INT_MAX


VI myfunc(string s){
	VI c(26,0);
	for (int i = 0; i < s.size(); ++i)
	{
		c[(int)(s.at(i)-'a')]++;
	}
	return c;
}


int main(int argc, char const *argv[])
{
	string s;
	cin>>s;

	int n;
	cin>>n;
	int f1=0,f2=0,f3=0,f4=0;
	int f=0;
	
	for (int i = 0; i < n; ++i)
	{
		string s1;
		cin>>s1;
		if(s==s1)f=1;
		if(s1.at(0)==s.at(0))f1=1;
		if(s1.at(1)==s.at(0))f2=1;
		if(s1.at(0)==s.at(1))f3=1;
		if(s1.at(1)==s.at(1))f4=1;
			
	}
	if(!f){
		if(f2==1&&f3==1)f=1;
	}
	
	if(f)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}