#include <bits/stdc++.h>
using namespace std;
#define maxn 100005

int main()
{
	int n,k;
	cin>>n>>k;
	if (k==1)
	{
		int x,y;
		x=y=0;
		for (int i=1;i<=n;i++) {
			int u;
			cin>>u;
			if (u) x++;
			else y++;
			if (y) {
				cout<<"yes"<<endl;
				return 0;
		}}
		cout<<"no"<<endl;
		return 0;
	} 
	if (k==2)
	{
		int x,y,w,e;
		x=y=w=e=0;
		for (int i=1;i<=n;i++)
		{
			int p,o;
			cin>>p>>o;
			if (p && o) x++; else
			if (p && !o) y++;   else
			if (!p && o) w++;  
			else e++;
			if (e)    {cout<<"yes"<<endl;return 0;}
			if (y && w) {cout<<"yes"<<endl;return 0;}
		}
		cout<<"no"<<endl;
		return 0;
	}
	else if (k==3)
	{
		int a1,a2,a3;
		int x1,x2,x3,x4,x5,x6,x7,x8,x9;
		x1=x2=x3=x4=x5=x6=x7=x8=x9=0;
		for (int i=1;i<=n;i++)
		{
			cin>>a1>>a2>>a3;
			if (a1 && a2 && a3) x1++;
			if (!a1 && !a2 && !a3) x2++;
			if (x1 && x2) {cout<<"yes"<<endl;return 0;}
			if (x2)
			{
				cout<<"yes"<<endl;return 0;
			}
			if (a1 && !a2 && !a3) x3++;    else
			if (!a1 && a2 && !a3) x4++;   else
			if (!a1 && !a2 && a3) x5++; else
			if (!a1) x7++;
			else if (!a2) x8++;
			else if (!a3) x9++;
			if ((x7&&x3) || (x8&&x4) || (x9&&x5)) {
				cout<<"yes"<<endl;
				return 0;
			}
			if (x3&&x4) {cout<<"yes"<<endl;return 0;}
			if (x4&&x5){cout<<"yes"<<endl;return 0;}
			if (x3&& x5){cout<<"yes"<<endl;return 0;}
			
			
		}
		cout<<"no"<<endl;
		return 0;
	}
	else if (k==4)
	{
		      int a,b,c,d;
		      int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;
		      x1=x2=x3=x4=x5=x6=x7=x8=x9=x10=0;
		      int d1,d2,d3,d4,d5;
		      d1=d2=d3=d4=0;
			  for (int i=1;i<=n;i++)
			  {
			  	cin>>a>>b>>c>>d;
			  	if (!a && !b && !c && !d)
			  	{
			  		cout<<"yes"<<endl;
			  		return 0;
				  }
				if (a && !b && !c && !d) x1++;
				if (b && !a && !c && !d) x2++;
				if (c && !a && !b && !d) x3++;
				if (d && !a && !b && !c) x4++;
				if (!a && b && c && d) d1++;
				if (a && !b && c && d) d2++;
				if (a && b && !c && d) d3++;
				if (a && b && c && !d) d4++;
				if ((x1&&d1) || (x2 && d2) || (x3&& d3) || (x4&& d4))
				{
					cout<<"yes"<<endl;
					return 0;
				}
				if ((x1&&x2)|| (x2&&x3)|| (x3&&x4) || (x1&&x3)|| (x1&&x4)|| (x2&&x4) )
				{
					cout<<"yes"<<endl;
					return 0;
				}
				if (a && b && !c && !d) x5++;
				if (a && c && !b && !d) x6++;
				if (a && d && !b && !c) x7++;
				if (b && c && !a && !d) x8++;
				if (b && d && !a && !c) x9++;
				if (c && d && !a && !b) x10++;
				if ((x1 && x8) || (x1&&x9) || (x1&&x10) || (x2&&x6) || (x2&&x7) || (x2&& x10) || (x3&&x5) || (x3&&x7) || (x3&& x9) || (x4&&x5) || (x4&&x6)|| (x4&&x8))
				{
					cout<<"yes"<<endl;
					return 0;
				}
				if ((x5&&x10) || (x6&&x9) || (x7&&x8))
				{
					cout<<"yes"<<endl;
					return 0;
				}
			} 
			cout<<"no" ;
			return 0;
	}
} 
/*
1 1
0
*/