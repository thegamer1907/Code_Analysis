#pragma warning(disable : 4996)

#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<set>
#include<map>
using namespace std;

#define ll long long int
#define setv(dgioj, redgs) memset(dgioj, redgs, sizeof(dgioj))
#define all(dgioj) dgioj.begin(), dgioj.end()

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, a, b;
	scanf("%d%d%d", &n, &a, &b);
	
	if (a > b)
		swap(a, b);

	vector<int> v;
	for (int i = 1; i <= n; i++)
		v.push_back(i);

	int c = 0;
	while (true) {
		c++;
		vector<int> t;
		swap(t, v);
		for (int i = 0; i< t.size(); i += 2) {
			if (t[i] == a && t[i + 1] == b) {
				if (t.size() == 2) {
					printf("Final!");
				}
				else
					printf("%d", c);
				return 0;
			}
			if (t[i] == a || t[i + 1] == a)
				v.push_back(a);
			else if (t[i] == b || t[i + 1] == b)
				v.push_back(b);
			else
				v.push_back(t[i]);
		}
	}


	
	return 0;
}