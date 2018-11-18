#include<bits/stdc++.h>
using namespace std;

int n, k;
bool mark[16 + 8];
vector<int> num;
bool a[4+ 3];

int main()
{
	cin >> n >> k;
	int cnt0 = 0;
	for(int i = 0; i < n; ++ i)
	{
		int cur = 0;
		for(int j = 0; j < k; ++ j)
		{
			cin >> a[j];
			cur *= 2;
			cur += a[j];
		}
		mark[cur] = 1;
		if(cur == 0)
			cnt0 ++;
	}
	
	if(cnt0 >= 2)
	{
		cout << "YES" << endl;
		return 0;
	}
	
	for(int i = 0; i < (int)pow(2, k) + 1; ++i)
	{
		if(!mark[i])
			continue;
		int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
		int h = i;
		cnt1 = h % 2;
		h /= 2;
		cnt2 = h % 2;
		h /= 2;
		cnt3 = h % 2;
		h /= 2;
		cnt4 = h % 2;
		for(int j = 0; j < (int)pow(2, k) + 1; ++ j)
		{
			if(!mark[j])
				continue;
			int cnt11 = 0, cnt21 = 0, cnt31 = 0, cnt41 = 0;
			int h1 = j;
			cnt11 = (h1 % 2);
			h1 /= 2;
			cnt21 = (h1 % 2);
			h1 /= 2;
			cnt31 = (h1 % 2);
			h1 /= 2;
			cnt41 = (h1 % 2);
			if(cnt1 + cnt11 <= 1 && cnt2 + cnt21 <= 1 && cnt3 + cnt31 <= 1 && cnt4 + cnt41 <= 1)
			{
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	
	cout << "NO" << endl;
	
	return 0;
}
