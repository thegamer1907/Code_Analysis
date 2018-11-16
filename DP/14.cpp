#define _CRT_SECURE_NO_WARNINGS
#define pb push_back

#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <ctime>
#include<map>
using namespace std;

vector<int>boiz;
vector<int>gurls;
	int n, m,a,b, ans;

//      TWO    POINTERS

int main() {

	scanf("%d", &n);
	while (n--) {
		scanf("%d", &a);
		boiz.pb(a);
	}

	scanf("%d", &m);
	while (m--) {
		scanf("%d", &b);
		gurls.pb(b);
	}

	sort(boiz.begin(), boiz.end());
	sort(gurls.begin(), gurls.end());


	int L = 0, R = 0;

	while (L != boiz.size() && R != gurls.size()) {

		if (abs(boiz[L] - gurls[R]) <= 1) {
			L++;
			R++;
			ans++;
		}
		else {
			if (boiz[L] < gurls[R]) { L++; }
			else if (boiz[L] > gurls[R]) { R++; }
		}
	}

	printf("%d\n", ans);
return 0;
}