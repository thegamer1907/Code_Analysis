/*     ya khoda     */
#include<bits/stdc++.h>

#define ll long long
#define LD long double

#define PB push_back
#define PF push_front
#define P push

#define POB pop_back
#define POF pop_front
#define PO pop

#define F first
#define S second

#define MP make_pair

using namespace std;



const int N=1e3;
char ch[N][N];
ll c[N][N], r[N][N],sumc[N][N], sumr[N][N];
ll n,m,q;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>ch[i][j];
    cin>>q;



	for(int i=0;i<n;i++)
		for(int j=1;j<m;j++)
		{
			r[i][j]=r[i][j-1];
			if(ch[i][j]=='.' && ch[i][j-1]=='.')   {  r[i][j]++;  }
		}
	for(int i=1;i<n;i++)
		for(int j=0;j<m;j++)
			r[i][j]+=r[i-1][j];



	for(int j=0;j<m;j++)
		for(int i=1;i<n;i++)
		{
			c[i][j]=c[i-1][j];
			if(ch[i][j]=='.' && ch[i-1][j]=='.')   {  c[i][j]++;  }
		}
	for(int j=1;j<m;j++)
		for(int i=0;i<n;i++)
			c[i][j]+=c[i][j-1];



	for(int i=0;i<q;i++)
	{
		long long x1,y1,x2,y2 , s=0;
		cin>>x1>>y1>>x2>>y2;
        x1--; y1--;   x2--; y2--;


		s+=r[x2][y2]-r[x2][y1];
		if(x1>0)   {  s-=r[x1-1][y2];  }
		if(x1>0)   {  s+=r[x1-1][y1];  }


		s+=c[x2][y2]-c[x1][y2];
		if(y1>0)  {  s-=c[x2][y1-1];  }
		if(y1>0)  {  s+=c[x1][y1-1];  }


		cout<<s<<endl;
	}
    return 0;
}
