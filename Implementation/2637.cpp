#include <iostream>
#include <cstdio>

using namespace std;

int a,b,c;
int res;
int main()
{
	ios_base::sync_with_stdio(0);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	cin >> a >> b >> c;
	res=a+b+c;
	res=max(res,a+b*c);
	res=max(res,a*b+c);
	res=max(res,a*b*c);
	res=max(res,a*(b+c));
	res=max(res,(a+b)*c);
	cout << res;
	return 0;
}
