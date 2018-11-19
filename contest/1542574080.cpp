#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	string pass;
	int n ;
	cin >> pass >> n;
	bool a = 0 , b =0;
	for(int i = 0 ; i < n ; i++)
	{
		string x ;
		cin >> x;
		if(x == pass) a = b = 1;
		if(pass[1] == x[0]) b = 1;
		if(pass[0] == x[1]) a = 1;
	}
	a&&b?cout<< "YES\n":cout << "NO\n";
}
