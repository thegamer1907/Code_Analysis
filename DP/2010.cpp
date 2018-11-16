#include <bits/stdc++.h>
using namespace std;
const int M = 1e5 + 5;
int n, m, A[M];

int main() 
{
    	#ifndef ONLINE_JUDGE
    		freopen("in.txt", "r", stdin);
	    	freopen("out.txt", "w", stdout);
	#endif
    	ios_base::sync_with_stdio(0);   cin.tie(0);     cout.tie(0);
    	cin >> n >> m;
    	for(int i = 0; i < n; i++)	cin >> A[i];
    	set <int> s;
    	for(int i = n - 1; i >= 0; i--)
    	{
    		s.insert(A[i]);
    		A[i] = (int)s.size();
    	}
    	while(m--)
    	{
    		int l;		cin >> l;
    		cout << A[l - 1] << endl;
    	}
    	return 0;
}