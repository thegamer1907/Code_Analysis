#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	int n;
	cin >> n;
	int a[n], s[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];	
		if(i) s[i] = s[i-1] + a[i];
		else s[i] = a[i];
	}
	int temp = -n-1;
	if(!a[0]) temp = 1;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int k = j-(i-1) - 2*(s[j] - s[i] + a[i]);
			temp = max(k, temp);
		}
	}

	//cout << "temp is " << temp <<"\n";
	cout << temp + s[n-1] << "\n";
	return 0;
}
