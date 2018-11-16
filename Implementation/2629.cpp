#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second
#define mp make_pair

int v[3];

int main() {
	for(int i = 0; i < 3; i++)
		scanf("%d", &v[i]);

	int ans = max(v[0] + v[1] + v[2], v[0] * v[1] * v[2]);

	ans = max(ans, v[0]*v[1]+v[2]);
	ans = max(ans, v[0]+v[1]*v[2]);
	ans = max(ans, (v[0]+v[1])*v[2]);
	ans = max(ans, v[0]*(v[1]+v[2]));

	printf("%d\n", ans);

    return 0;
}