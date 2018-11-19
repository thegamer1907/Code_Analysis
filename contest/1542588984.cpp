#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define MAXN 101100

int main(){
	string s;
	cin >> s;
	int n;
	string aux;
	
	cin >> n;
	bool ok1 = true;
	bool ok2 = true;
	vector<string> v;
	for (int i = 0; i < n; i++)
	{
		cin >> aux;
		v.pb(aux);
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(s[0] == v[i][1] && s[1] == v[j][0]){
				cout << "YES\n";
				return 0;
			}
			if(v[i] == s){
				cout << "YES\n";
				return 0;
			}
		}
		
	}
	
	
	cout << "NO\n";
	
	
	return 0;
}
