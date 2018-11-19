#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[3],x,y;
	cin >> a[0] >> a[1] >> a[2] >> x >> y;
	a[0]*=5;
	x*=5; y*=5;
	if(x>y) swap(x,y);
	int a1=0,a2=0;
	for(int i=0;i<3;i++)
	{
		if(x<=a[i]&&a[i]<y) a1++;
		else a2++;
	}
	if(a1&&a2) cout << "NO" << endl;
	else cout << "YES" << endl;
}