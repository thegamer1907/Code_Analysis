#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int A[100005];
	for(int i = 1; i <= N; i++)
		cin >> A[i];
	
	cout << max((int)ceil((double)accumulate(&A[1], &A[N]+1, 0ll) / (N-1)), *max_element(&A[1], &A[N]+1));
}