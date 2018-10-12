#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

void f() 
{
	int n;
	cin >> n;
	vector<long long> v(n);
	long long minm = 0;
	for(int i = 0; i<n; i++)
	{
		cin >> v[i];
		minm = max(v[i], minm);
	}
	long long sum = 0;
	for(int i = 0; i<n; i++)
		sum+=v[i];

	long long num = 0;

	if(sum%(n-1)!=0)
		num = sum/(n-1) + 1;
	else num = sum/(n-1);

	cout << max(num, minm) << endl;


}

int main()
{
	std::ios::sync_with_stdio(false);
    int t = 1;
    // cin>>t;             //comment out if only one test case
    for (int i = 0; i < t; ++i)
    {
        f();
    }
    return 0;
}
