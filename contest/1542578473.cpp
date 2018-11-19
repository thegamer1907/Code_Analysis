#include<bits/stdc++.h>
using namespace std;

int all[20];
int n, k;

bool good(int mask)
{
	vector<int> teams(k, 0);
	int all_tasks = 0;
	for(int i = 0; i < (1 << k); i++)
	{
		if(mask & (1 << i))
		{
			if(all[i] == 1)
			{
				all_tasks ++;
				for(int t = 0; t < k; t++)
				{
					if((1 << t) & i){
						teams[t] ++;
					}
				}	
			}
		}
	}
	if(all_tasks == 0)
		return 0;
	for(int i = 0; i < k; i++)
	{
		if(2 * teams[i] > all_tasks)
			return 0;
	}
	return 1;
	
}

bool can()
{
	for(int i = 0; i < (1 << (1 << k)); i++)
	{
		if(good(i)){
			return 1;
		}
	}
	return 0;
}

int main()
{
	cin >> n >> k;
	for(int i = 0; i < n; i++)
	{
		int cur = 0;
		for(int j = 0, q; j < k; j++)
		{
			cin >> q;
			cur ^= (q << j);
		}	
		all[cur]  = 1;
	}
	if(can())
		cout << "YES";
	else
		cout << "NO";

}
