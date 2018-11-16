#include <iostream>
#include <set>
using namespace std;
int main()
{
	int N, M, X, count;
	int *A, *D;
	set<int> visited;
	cin >> N >> M;
	A = new int[N];
	D = new int[N];
	for (int i = 0; i < N; i++) cin >> A[i];
	for (int i = N - 1; i >= 0; i--) {
		visited.insert(A[i]);
		D[i] = visited.size();
	}
	for (int i = 0; i < M; i++) {
		cin >> X;
		cout << D[--X] << '\n';
	}
	cin.ignore();
	getchar();
    return 0;
}