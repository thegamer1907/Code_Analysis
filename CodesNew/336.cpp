#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n,t,i;
	cin>>n>>t;
	long long arr[n];
	for(i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	int sum = 0;
    int cnt = 0, ans = 0;
 
    for (int i = 0; i < n; i++) {
         
        if ((sum + arr[i]) <= t) {
            sum += arr[i]; 
            cnt++;
        } 
 
        else if(sum!=0)
        {
            sum = sum - arr[i - cnt] + arr[i];
        }
 
        ans = max(cnt, ans); 
    }
	cout<<ans;
	return 0;
}