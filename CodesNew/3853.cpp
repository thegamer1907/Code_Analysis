#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;cin>>n;
	int n_ = n;
	double sum = 0;
	long long m = 0;
	while(n--){
		long long x;cin>>x;
		m = max(m, x);
		sum+=x;
	}
	cout<<max((long long)m, (long long)ceil(sum/(double)(n_-1)))<<endl;
	return 0;
	
}