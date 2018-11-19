#include <iostream>
#include <bitset>
#include <set>
#include <stdio.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define sd(x) scanf("%d",&x);
#define sll(x) scanf("%I64d",&x);

int r;
int c[5];
set<int> s;

int pow(int a,int b)
{
	if(b==0)
		return 1;
	return a*pow(a,b-1);
}

int main()
{
	int n,k,t;
	string p;
	sd(n);
	sd(k);
	for (int i = 0; i < n; ++i)
	{
		t = 0;
		for (int j = 0; j < k; ++j)
		{
			cin>>r;
			t *= 2;
			t += r;
		}
		s.insert(t);
	}
	t = s.size();
	for(int i = 1; i < pow(2,t); i++)
	{
		p = bitset<16>(i).to_string();
		for (int j = 0; j < 5; ++j)
		{
			c[j] = 0;
		}
		int j = 0;
		bool f = false;
		for(set<int>::iterator it = s.begin(); it != s.end(); it++)
		{
			if(p[15-j] == '1')
			{
				c[4]++;
				if(*it>=8)
				{
					c[3]++;
				}
				if((*it>=4 && *it<8) || (*it>=12 && *it<16))
				{
					c[2]++;
				}
				if(*it%4 == 2 || *it%4==3)
				{
					c[1]++;
				}
				if(*it%2 == 1)
				{
					c[0]++;
				}
			}
			j++;
		}
		for (int j = 0; j < 4; ++j)
		{
			if(c[j]>(c[4]/2))
			{
				f = true;
			}
		}
		if(!f)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}