#include<iostream>
using namespace std;
long long int n, m, k;
long long int pos[100000];

int main()
{
	cin >> n >> m >> k;
	for (int i = 0; i < m; ++i)
		scanf("%d", &pos[i]);

	long long int ans = 0;
	long long int right = k;
	long long int erase_num = 0;

	while (1)
	{
		if (erase_num == m)break;
		if (pos[erase_num]-erase_num>right)
		{
			right += k;
			continue;
		}
		int cnt = 0;
		for (int i = erase_num; i < m; ++i)
		{
			if (pos[i] - erase_num <= right)
				cnt++;
			else
				break;
		}
		erase_num += cnt;	
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}