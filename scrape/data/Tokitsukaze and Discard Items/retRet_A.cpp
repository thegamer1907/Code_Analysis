#include<iostream>
#include<algorithm>
using namespace std;
long long int n, m, k;
long long int pos[100000];

int main()
{
	cin >> n >> m >> k;
	for (int i = 0; i < m; ++i)
		cin >> pos[i];

	sort(pos, pos + m);

	long long int ans = 0;
	long long int right = k;
	long long int erase_num = 0;

	while (1)
	{
		if (erase_num == m)break;
		int cnt = 0;
		for (int i = erase_num; i < m; ++i)
		{
			if (pos[i] - erase_num <= right)
				cnt++;
			else
				break;
		}
		erase_num += cnt;	
		if (cnt==0)
		{
			right = k*((pos[erase_num]-erase_num-1) / k)+k;
			continue;
		}
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}