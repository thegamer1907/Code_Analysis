#include <iostream>
#include <set>
#include <algorithm>
#include <cmath>
#define MAXN 100

using namespace std;

int N, M;
int A[MAXN + 1], B[MAXN + 1];

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> B[i];
	}

	sort(A, A + N);
	sort(B, B + M);

	int ans = 0, index = -1;
	for (int i = 0; i < N; i++) {
		for (int j = index + 1; j < M; j++) {
			if (abs(A[i] - B[j]) <= 1) {
				ans++;
				index = j;
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}