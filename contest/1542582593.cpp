#include <bits/stdc++.h>
using namespace std;
char a,b;
pair <char,char> st[123];
vector <char> q[26];
int main()
{
	int n;
	scanf("%c%c",&a,&b);
	scanf("%d\n",&n);
	for (int i = 0; i < n; i++)
    {
        scanf("%c%c",&st[i].first, &st[i].second);
        if (st[i].first == a && b == st[i].second)
        {
			puts("YES");
			return 0;
		}
        getchar();
        //printf("%c%c\n",st[i].first, st[i].second);
    }

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			q[st[i].second - 'a'].push_back(st[j].first);
		}
	}
	for (size_t i = 0; i < q[a - 'a'].size(); i++)
	{
		if (b == q[a - 'a'][i])
		{
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
}
