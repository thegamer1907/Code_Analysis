#include<bits/stdc++.h>
#include<bits/unordered_set.h>
using namespace std;

int n, m;
int a[20000];
int father[20000];
//vector<int> sons[20000];

int main() {
	scanf("%d", &n);

	for (int i = 2; i <= n; i++) {
		scanf("%d", &father[i]);
//		sons[father[i]].push_back(i);
	}
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}

	int ansa = 0;
//	deque<int> deqa;
//	deqa.push_back(1);
//	while (deqa.size()) {
//		int i = deqa.front();
//		deqa.pop_front();
//		if (a[i] != a[father[i]]) {
//			ansa++;
//		} else {
//
//		}
//	}

	for (int i = 1; i <= n; i++) {
		if (a[i] != a[father[i]]) {
			ansa++;
		}
	}
	cout << ansa << endl;
	return 0;
}
