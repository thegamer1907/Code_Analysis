#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int i,x=0;
	cin >> s;
	for(i=0;s[i];i++)
		if(s[i]=='4' || s[i]=='7')
			x++;
	if(x==4 || x==7)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}
