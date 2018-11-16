#include <iostream>
#include <ctime>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
#include <ctime>
#include <set>
using namespace std;

int main() {
	int N;
	int sum = 0;
	cin >> N;
	vector<int> M;
	for (int i = 0; i < N; i++) {
		int a;
		cin >>a;
		if (a){ M.push_back(-1); sum++;} else M.push_back(1);
	}

	int A[1000];
	fill(A, A + N, 0);
	A[0] = M[0];
	int mx = A[0];
	for (int i = 1; i < N; i++) {
		A[i] = max(M[i], A[i - 1] + M[i]);
		mx = max(A[i], mx);
	}

	cout << mx + sum << endl;

	return 0;
}


// 10 1 0 1 1 1 0 1 0 1 0