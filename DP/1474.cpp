#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, kecevi = 0;;
	cin >> n;
	int a[n];
	bool imaNula = false;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		if(a[i] == 1) a[i] = -1, kecevi++;
		else a[i] = 1, imaNula = true; 
	}
	if(!imaNula)
	{
		cout << kecevi - 1;
		return 0;
	}
	
	int maks = -2e31, maksOvde = 0;
	for(int i = 0; i < n; i++)
	{
		maksOvde += a[i];
		if(maks < maksOvde) maks = maksOvde;
		if(maksOvde < 0) maksOvde = 0;	
	}			
	cout << maks + kecevi;
	return 0;
}
