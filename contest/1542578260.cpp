#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);
	int h1,m,s,t11,t22;
	cin >> h1 >> m >> s >> t11 >> t22;
	int t1=t11*5, t2=t22*5;
	if(t1==60)
		t1=0;
		if(t2==60)
			t2=0;
			if(h1==12)
				h1=0;
	int  h2=h1*5;
	int q=0,p=0;
	if(m==s && s==0)
	{
		if(h2>min(t1,t2) && h2< max(t1,t2))
		{
			{cout << "NO";return 0;}
		}
		else {cout << "YES";return 0;}		
	}	
	 double h = h2+0.5;
	for( int i=min(t1,t2);i<max(t1,t2);i++)
	{
		if(  i%60==m%60 || i%60==s%60 || (i<h && i+1>h))
			{
				q++;
			}
			
	}
	for(int i=max(t1,t2);i<min(t1,t2)+60;i++)
	{
		if(i%60 == m%60 || i%60== s%60)
		{
			p++;
		}
		if(i+1>h && i<h)
			p++;
		if(i+1>h+60 && i<h+60)
			p++;
	}
	if(p==0 || q==0)
		cout << "YES";
		else cout << "NO";
}