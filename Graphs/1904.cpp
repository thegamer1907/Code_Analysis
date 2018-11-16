#include <algorithm>
#include<string>
#include<cmath>
#include<map>
#include<cstdio>
#include <stdio.h>
#include<vector>
#include<queue>
#include<stack>
#include<list>
#include<memory.h>
#include<iostream>
#include <functional> 

using namespace std;


map<int, int> freq_boy;
map<int, int> freq_girl;

int main() {
	const int N = 101;
	int boy[N], girl[N];
	int nb, ng;
	cin >> nb;

	for (int i = 0; i < nb; i++) {
		cin >> boy[i];
		freq_boy[boy[i]]++;
	}
	cin >> ng;
	for (int i = 0; i < ng; i++) {
		cin >> girl[i];
		freq_girl[girl[i]]++;
	}

	sort(boy ,boy +nb);
	sort(girl,girl +ng);

	int ans = 0;

	for (int i = 0; i < nb; i++) {
		for (int j = 0; j < ng; j++) {
			if ((boy[i] == (girl[j]-1) || girl[j] == (boy[i] - 1) || boy[i] == girl[j]) && freq_girl[girl[j]] > 0) {
				freq_girl[girl[j]]--;
				ans++;
				break;
			}
		}
	}
	cout << ans;
	return 0;
}