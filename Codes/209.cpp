#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int N; cin >> N;
	int A[N]; 
	for(int i = 0; i < N; ++i) cin >> A[i];
	for(int i = 1; i < N; ++i) A[i] += A[i-1];

	int M; cin >> M;
	while(M--)
	{
		int q; cin >> q;
		int l = 0, r = N;
		while(l != r)
		{
			int m = (l+r)/2;
			if(A[m] >= q) r = m;
			else l = m+1; 
		}

		cout << r+1 << '\n';
	}

	return 0;
}