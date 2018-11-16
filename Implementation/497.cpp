#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin >> n;
	int a[n];
	int res = 0;
	cin >> k;
	for(int i = 0;i <n;i++)
	{
		cin >> a[i];
		if((a[i]>0) && (i< k -1))
			res++;
		else if((a[i]>0) && (a[i]==a[k-1]))
			res++;
	}
	cout << res;
	
}
