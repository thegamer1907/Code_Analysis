
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double pi = acos(-1);

int main(int argc, char const *argv[])
{
//	freopen("C:\\Users\\tiger\\Desktop\\b.txt", "r", stdin);
	string a;
	while ( cin >> a )
	{
		int n;
		cin >> n;
		int mp[300] = {0};
		int ret1 = 0;
		int ret2 = 0;
		while ( n -- )
		{
			string b;
			cin>>b;
			if ( b[0] == a[1] ) ret1 = 1;
			if ( b[1] == a[0] ) ret2 = 1;
			if ( b[0] == a[0] && b[1] == a[1] )
			{
				ret1 = 1; ret2 = 1;
			}
		}
		if ( ret1 && ret2 )
		{
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
    return 0;
}