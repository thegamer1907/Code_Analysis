#include<bits/stdc++.h>
#define SYNC ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long 
#define ull unsigned long long
#define mp make_pair
#define pb push_back
#define pi_h 1.57079632
#define pi 3.14159265

using namespace std;

int main()
{
	SYNC
	int k;
	cin>>k;

	int i=1,j;
	int ans=0;
	for(i=1;ans<k;i++)
	{
		int sum=0;
		for(j=i;j!=0;)
		{
			sum+=j%10;
			j=j/10;
		}
		if(sum==10)
			ans++;
	}
	cout<<i-1;
	return 0;
}