#include <bits/stdc++.h>
using namespace std;

int main() {
string p;
cin >> p;
int n;
cin >> n;
string s[n];
for(int a=0;a<n;++a)
{
	cin >> s[a];
}
	for(int a=0;a<n;++a)
	{
		if(s[a]==p)
		{
			cout << "YES" ;
			return 0;
		}
	}

	reverse(p.begin(),p.end());
	for(int a=0;a<n;++a)
	{
		if(s[a]==p)
		{
			cout << "YES" ;
			return 0;
		}
	}
	bool check1=false,check2=false ;
	for(int a=0;a<n;++a)
	{
	 if(s[a].at(0)==p.at(0)) check1=true;
	 if(s[a].at(1)==p.at(1)) check2=true ;
	}
	if(check1&&check2) cout << "YES" ;
	else cout << "NO" ;
}