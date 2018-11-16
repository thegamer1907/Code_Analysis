#include<bits/stdc++.h>
using namespace std;
long long n;
int main()
{
	cin>>n;
	if(n%2)
		cout<<(n/2)-n;
	else
		cout<<n/2;
	return 0;
}