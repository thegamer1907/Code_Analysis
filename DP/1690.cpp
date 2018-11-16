#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int AB=0,BA=0;
	int len = s.length();
	
	for(int i=0;i<len-1;i++)
	{
		if(s[i]=='A' && s[i+1]=='B' && AB==0) {i++; AB=1;}
		else if(s[i+1]=='A' && s[i]=='B' && AB==1)	{BA=1;i++;}
	}
	if(AB!=1 || BA!=1) {AB=0;BA=0;}
	for(int i=0;i<len-1;i++)
	{
		if(s[i+1]=='A' && s[i]=='B' && BA==0)	{BA=1;i++;}
		else if(s[i]=='A' && s[i+1]=='B' && BA==1) {i++; AB=1;}
	}
	
	(AB==1 && BA==1)?cout << "YES":cout << "NO";	
}