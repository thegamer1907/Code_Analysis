#include<bits/stdc++.h>

using namespace std;

string a[100+10];
string s;
int n;

int main(){
	cin >> s;
	cin >> n;
	cin.ignore();
	for (int i  = 1; i <= n; ++i)
		cin >> a[i];
	
	int flag = 0;
	for (int i = 1; i <= n; ++i)
		for (int j = 1 ; j <= n; ++j)
		{
			string ss = a[i] + a[j];
			for (int k = 0 ; k < ss.length()-1; ++k)
				if ( ss[k] == s[0] && ss[k+1] == s[1]) flag = 1;
		}
			
	if (flag) cout << "YES";
		else cout << "NO";
	return 0;
}
