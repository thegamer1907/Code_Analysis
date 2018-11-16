/* ---------itz_me9---------- */
/* ---------ONLY GOD AND I KNOW WHAT I HAVE WRITTEN ----------*/
#include<bits/stdc++.h>
#define ll long long
#define hell 1000000007
#define vi vector<long long>

using namespace std;

int main()
{
	int n,i,sum1=0,sum2=0,sum3=0;
	cin >> n;
	for(i=0;i<n;i++)
	{
		int t1,t2,t3;
		cin>>t1>>t2>>t3;
		sum1=sum1+t1;
		sum2=sum2+t2;
		sum3=sum3+t3;
	}
	if(sum1==0 && sum2==0 && sum3==0)
		cout<<"YES";
	else cout<<"NO";
	return 0;
}