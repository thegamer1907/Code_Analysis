#include<bits/stdc++.h>
using namespace std;
long long a[1000100];
int main()
{
    long long sum=0, k, jav=0, t;
	string s;
	cin>>k>>s;
	a[0]=1;
	for(t=0;t<s.length();t++){
		if(s[t]=='1') sum++;

		if(sum>=k) jav=jav+a[sum-k];

		a[sum]++;
//cout<<t<<" * "<<sum<<" - "<<a[sum-k]<<" - "<<a[sum]<<endl;
	}
	cout<<jav;
	return 0;
}
