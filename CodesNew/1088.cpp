#include<iostream>
#include<climits>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool check(long long k, long long n) {
	long long sum = 0;
	long long cur = n;
	while (cur > 0) {
		long long o = min(cur, k);
		sum += o;
		cur -= o;
		cur -= cur / 10;
	}
	return sum * 2 >= n;
}

int main()
{
	ll n;
	cin>>n;
	ll copy=n;
	ll half=n/2;

	if(n%2!=0)
		half++;


	ll left=1,right=n;

	ll ans=n;
	while(left<=right)
	{
		ll mid=(left+right)/2;
		//cout<<"mid "<<mid<<" vasya "<<vasya<<" petya "<<petya<<endl;
		if(check(mid,n)==false){
			left=mid+1;
		}
		else{
			ans=mid;
			right=mid-1;
		}
	}

	cout<<ans<<endl;
	return 0;
}