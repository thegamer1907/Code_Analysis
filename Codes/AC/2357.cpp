//Kaori Miyazono, did I reach you ?
//"I can't die because... I'm the one who will protect you." -Asuna Yuuki
 
#include <bits/stdc++.h>
using namespace std;

const int N = 1000001;
const int M = 10 * N;

int nums[N];
vector<int> d[M];
bool is[M];
bool have[M];
vector<int> p;
vector<int> cnt;
map<int, int> id;
int n;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", nums + i);
		have[nums[i]] = 1;
	}
	for(int i = 2; i < M; i++) is[i] = 1;
	for(int i = 2; i < M; i++) {
		if (is[i] == 1) {
			p.push_back(i);
			cnt.push_back(0);
			if (have[i]) d[i].push_back(i);
			for(int j = i + i; j < M; j += i) {
				is[j] = 0;
				if (have[j]) d[j].push_back(i);
			}
		}
	}
	int size = p.size();
	for(int i = 0; i < size; i++) id[p[i]] = i;
	for(int i = 0; i < n; i++) {
		for(int di : d[nums[i]]) {
			cnt[id[di]]++;
		}
	}
	for(int i = 1; i < size; i++) cnt[i] += cnt[i - 1];
	int q;
	scanf("%d", &q);
	for(int i = 0; i < q; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		int l = lower_bound(p.begin(), p.end(), a) - p.begin();
		int r = upper_bound(p.begin(), p.end(), b) - p.begin() - 1;
		if (l > 0) {
			printf("%d\n", cnt[r] - cnt[l - 1]);
		} else {
			printf("%d\n", cnt[r]);
		}
	}
   	return 0;
}