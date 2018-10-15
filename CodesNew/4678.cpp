#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
#define pb push_back
#define mp make_pair
#define bs binary_search

using namespace std;

int main()
{
	int n,s;
	cin >> n;
	vector<int> nums, hl_1, hl_2;
	for(int i = 0; i < n; i++)
	{
		cin >> s;
		nums.pb(s);
	}
	sort(nums.begin(),nums.end());
	for(int i = 0; i < n; i++)
	{
		if(i < n/2)
		{
			hl_1.pb(nums[i]*2);
		}
		else
		{
			hl_2.pb(nums[i]);
		}
	}
	int ans = n;
	int temp;
	int sv = 0;
	for(int i = 0; i < hl_1.size(); i++)
	{
		temp = hl_1[i];
		for(int j = sv; j < hl_2.size(); j++)
		{
			sv = j+1;
			if(temp <= hl_2[j])
			{
				ans--;
				break;
			}
		}
	}
	cout << ans;
}	