#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>

using namespace std;

int n, m;
vector<int> state[20];

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < 20; i++)
		state[i].clear();
	for (int i = 1; i <= n; i++) { 
		int s = 0;
		for (int j = 1; j <= m; j++) {
			int x;
			scanf("%d", &x);
			s = (s << 1) | x;
		}
		state[s].push_back(i);
	}

	for (int i = 0; i <= 15; i++) {
		if (state[i].size() == 0)
			continue;
		for (int j = 0; j <= 15; j++) {
			if (((i & j) == 0) && state[j].size() > 0) {
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
}
 							 		    	 	 						     	