/*
* Allah is Almighty.......
* File Name: A.cpp
* Mehedi Hasan Angkur <thisisangkur@gmail.com>
* CSE 11th Batch,MBSTU
* uva,cf id mbstu_angkur..
* Date: 2017-10-05
* keep coding...
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define D double
#define pb push_back
#define mp make_pair
#define sf scanf
#define pf printf
#define ff first
#define ss second
#define sz 100005
#define sq(x) x*x
#define eps 1e-8
#define PI (2*acos(0.0))
#define mem(a, b) memset(a, b, sizeof a)
#define dist(x1, y1, x2, y2) sqrt(sq(x1-x2)+sq(y1-y2))
#define FastIO ios_base::sync_with_stdio(0)
const int inf = 0x7f7f7f7f;
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //FastIO;
    string st,stt[105];
    int n;
    while(cin>>st)
    {
		cin>>n;
		int f=0,f1=0,f2=0;
		for(int i=0; i<n; i++)
		{
			cin>>stt[i];
			if(stt[i][0]==st[0] && stt[i][1]==st[1])
			{
				f = 1 ;
			}
			else if(stt[i][1]==st[0] && stt[i][0]==st[1])
			{
				f = 1 ;
			}
			else if(stt[i][1] == st[0])
			{
				f1 = 1 ;
			}
			else if(stt[i][0]==st[1])
			{
				f2 = 1 ;
			}
		}
		if(f==1 ||(f1==1 && f2==1))
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
    
   return 0;
}




