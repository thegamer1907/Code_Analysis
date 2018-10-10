#include<bits/stdc++.h>
using namespace std;
long long n1,n2,n3;
long long p1,p2,p3;
long long r;
long long b,s,c,z=0;
int check(long long cnt)
{
	long long int m = r;
	if(n1 < cnt*b )
		m -= (cnt*b - n1)*p1;
	if(n2 < cnt*s )
		m -= (cnt*s - n2)*p2;
	if(n3 < cnt*c )
		m -= (cnt*c - n3)*p3;

	return ((m>=0)?1:0);

}
int main()
{
	string s1;
	cin >> s1;
	cin >> n1 >> n2 >> n3;
	cin >> p1 >> p2 >> p3;
	cin >> r;
	
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i] == 'B')
			b++;
		if(s1[i] == 'S')
			s++;
		if(s1[i] == 'C')
			c++;
	}
	long long a=0,b=(long long)1E15,mid,ans;
	while(a <= b)
	{
// 		cout << a <<" "<< b << endl;
		mid  = a + (b-a)/2;
		if(check(mid))
		{
			ans = mid;
			a = mid+1;
		}
		else
		{
			b = mid-1;
		}
	}
	cout << ans << endl;

}