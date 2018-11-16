#include <bits/stdc++.h>
using namespace std;
int ans[1100000], prev1[1100000], n;
vector<int> v;
int main()
{
	for (int i = 1; i <= 1e6; i++)
	{
		ans[i] = 1e9;
		int temp = i, flag = 1;
		while (temp > 0)
		{
			if (temp%10 > 1)
			{
				flag = 0;
				break;
			}
			temp /= 10;
		}
		if (flag)
			v.push_back(i);
	}
	sort(v.begin(), v.end());
	ans[0] = 0;
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j <= 1e6-v[i]; j++)
		{
			if (1+ans[j] < ans[j+v[i]])
			{
				ans[j+v[i]] = 1+ans[j];
				prev1[j+v[i]] = v[i];
			}
		}
	}
	cin>>n;
	cout<<ans[n]<<endl;
	while (n > 0)
	{
		cout<<prev1[n]<<" ";
		n -= prev1[n];
	}
	cout<<endl;
}