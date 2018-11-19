#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<iostream>
#include<complex>
#include<sstream>
#include<algorithm>
#include<iomanip>
#include<queue>
#include<cmath>
#include<string>
#include<map>
#include<vector>
#include<set>
using namespace std;
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}
int main()
{
	fast();
	int n,x=0,y=0;
	string s,c;

	cin>>s>>n;
	for(int i=0;i<n;i++)
	{
		cin>>c;
		if(s == c)
		{
			x++;
			y++;
			continue;
		}
		if(c[0] == s[1])
			x++;
		if(c[1] == s[0])
			y++;
	}

	if(x!=0 && y!=0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	

}