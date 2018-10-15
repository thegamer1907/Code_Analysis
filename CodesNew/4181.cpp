#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N, T;
	cin >> N >> T;
	
	static long long sumA[200005];
	for(int i = 1; i <= N; i++) {
		cin >> sumA[i];
		sumA[i] += sumA[i-1];
	}
	
	long long sumD = 0;
	while(T--) {
		long long d;
		cin >> d;
		sumD += d;
		
		int i = upper_bound(&sumA[1], &sumA[N]+1, sumD) - &sumA[0];
		if(i > N) {
			i = 1;
			sumD = 0;
		}
		
		cout << N-i+1 << endl;
	}
}