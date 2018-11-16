#include<cstdio>
#include<set>
#include<algorithm>
using namespace std;
int a[100100];
pair<int,int> x[100100];
set<int> st;
int dap[100100];
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < m; i++) {
		scanf("%d", &x[i].first);
		x[i].second = i;
	}
	sort(x, x + m);
	int prev = n+1;
	for (int i = m - 1; i >= 0; i--)
	{
		for (int y = x[i].first; y < prev; y++)
			st.insert(a[y]);
		prev = x[i].first;
		dap[x[i].second] = st.size();
	}
	for (int i = 0; i < m; i++)
		printf("%d\n", dap[i]);
}