#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n,m;
	cin>>n>>m;
 	int a[n];
 	int sum=0;
 	for (int i=0;i<n;i++)
{
 		cin>>a[i];
 		sum+=a[i];
} 
	sum=ceil((double)(sum+m)/(double)n);
	sort(a,a+n);
 	int k_max=a[n-1]+m;
 	int k_min;
 	k_min=max(sum,a[n-1]);
 	cout<<k_min<<" "<<k_max;
}