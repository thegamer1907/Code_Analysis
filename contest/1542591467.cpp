#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
#include <functional>
#include <set>
#include <map>
#include <vector>
#include <queue>
#include <stack>
#include <iterator>
using namespace std;

typedef long long ll;

int main()
{
	char a[3]; scanf("%s", a);
	int n; scanf("%d", &n);
	char b[3];
	int f1 = 0, f2 = 0, f3 = 0;
	for (int i = 1; i <= n; i++)
	{
		scanf("%s", b);
		if (strcmp(a, b) == 0) { printf("YES"); return 0; }
		if (b[0] == a[1]) f1++;
		if (b[1] == a[0]) f2++;
	}
		if (f1 > 0 && f2 > 0) printf("YES");
		else printf("NO");


	return 0;
}