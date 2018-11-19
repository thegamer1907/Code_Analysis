#include <bits/stdc++.h>
using namespace std;

int main()
{

	string str;
	cin>>str;
	int n;
	cin>>n;
	string s;
	int flag = 0;
	int first_letter = 0;
	int second_letter = 0;

	for(int i=0;i<n;i++)
	{
		cin>>s;
		if(s[0]==str[0] && s[1]==str[1]) flag = 1;
		if(s[1] == str[0]) first_letter = 1;
		if(s[0] == str[1]) second_letter = 1;
	}

	if(flag || (first_letter && second_letter)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

	return 0;
}