#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r", stdin);
	int n, x = 0,y = 0,z = 0;
	cin>>n;
	while( n-- ) {
		int a, b, c;
		cin>>a >> b>> c;
		x += a;
		y += b;
		z += c;
	}

    cout<<((x == y && y == z && z == 0)? "YES": "NO")<<endl;
	return 0;
}
