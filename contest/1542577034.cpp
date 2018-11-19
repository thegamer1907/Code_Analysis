#include <bits/stdc++.h>
using namespace std;
struct node
{
	int id;
	double val;
	bool operator<(const node k)const
	{
		return val < k.val;
	}
}ans[10];
int main()
{
	//freopen("in.txt", "r", stdin);
	int hh, tt1, tt2, mm, ss;
	cin >> hh >> mm >> ss >> tt1 >> tt2;
	hh %= 12, tt1 %= 12, tt2 %= 12;
	double h = hh*5, t1 = tt1*5, t2 = tt2*5, m = mm, s = ss;
	double p1, p2;
	m += s/60;
	h += m/12;
	p1 = max(max(h, m), s);
	p2 = min(min(h, m), s);
	double tmp;
	if(s > p2 && s < p1) tmp = s;
	if(m > p2 && m < p1) tmp = m;
	if(h > p2 && h < p1) tmp = h;
	ans[0] = (node){0, p2};
	ans[1] = (node){1, tmp};
	ans[2] = (node){2, p1};
	ans[3] = (node){4, min(t1, t2)};
	ans[4] = (node){5, max(t1, t2)};
	//printf("%.5f %.5f %.5f %.1f %.1f\n", p2, tmp, p1, min(t1, t2), max(t1, t2));
	sort(ans, ans+5);
	if(ans[0].id == 4 && ans[1].id == 5 ||
	ans[1].id == 4 && ans[2].id == 5 ||
	ans[2].id == 4 && ans[3].id == 5 ||
	ans[3].id == 4 && ans[4].id == 5 ||
	ans[4].id == 5 && ans[0].id == 4) puts("YES");
	else puts("NO");
	return 0;
} 