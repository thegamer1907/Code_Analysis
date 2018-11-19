#include<bits/stdc++.h>
typedef long long ll;
const ll mod=1e9+7;
const ll inf=0xc0c0c0c0;
const ll INF=0x3f3f3f3f;
using namespace std;
int cnt[17];
int N,K;
int main()
{
	cin>>N>>K;
	int i,j;
	for(i=0;i<N;i++)
	{
		int x=15;
		for(j=0;j<K;j++)
		{
			int d;
			cin>>d;
			x^=(d<<j);
		}
		cnt[x]++;
	}
	for(i=0;i<16;i++)
	{
		if(cnt[i]==0) continue;
		int c=0;
		for(j=0;j<4;j++)
		{
			if(i&(1<<j)) c++;
		}
		if(c==4)
		{
			cout<<"yes";
			return 0;
		}
		else if(c==3)
		{
			for(j=0;j<16;j++)
			{
				if((i|j)==15&&cnt[j])
				{
					cout<<"yes";
					return 0;
				}
			}
		}
		else if(c==2)
		{
			if(cnt[(15^i)])
			{
				cout<<"yes";
				return 0;
			}
		}
	}
	cout<<"no";
	
	
	
	return 0;
}

