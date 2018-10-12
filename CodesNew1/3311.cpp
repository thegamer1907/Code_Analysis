/*
 *
 * @author Rudrakh
 */
#include <bits/stdc++.h>
#define MAXN 100005
#define MOD 1000000007
#define lli long long int
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define F first
#define S second
#define MID (s+e)/2
using namespace std;

int main()
{
	int n,m,a[105];
	cin>>n>>m; for(int i=0;i<n;++i) cin>>a[i];
	sort(a,a+n);
	int ma = a[n-1], tmp = m;
	for(int i=0;i<n-1 && m>0;++i)
			while(a[i]<a[n-1] && m>0)
			{
				a[i]++;
				m--;
			}
	cout<<*std::max_element(a,a+n)+(m/n)+(m%n>0)<<" "<<ma+tmp<<endl;
	return 0;
}