#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;



int main() {
	// #ifndef opp
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	
	string s;
	cin >> s;

	int l = s.size(),flag=0;
	for(int i=0;i<l;i++)
	{
		if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='0' && s[i+3]=='0' && s[i+4]=='0' && s[i+5]=='0' && s[i+6]=='0')
			flag =1;
		if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='1' && s[i+3]=='1' && s[i+4]=='1' && s[i+5]=='1' && s[i+6]=='1')
			flag = 1;
	}

	if(flag)
		cout << "YES";
	else
		cout << "NO";
}
