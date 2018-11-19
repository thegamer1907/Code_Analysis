/*Divyam Goyal - IIT-BHU*/
#include<bits/stdc++.h>
using namespace std;

#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define bitcount    __builtin_popcountll
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
#define ll long long
#define mp(a,b) make_pair(a,b)
#define F first
#define S second
#define pb(x) push_back(x)
#define MOD 1000000007
#define MAX 100005

int x[5];


int main()
{
    //ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	h%=12;
	t1%=12;
	t2%=12;
	x[3]=s/5;
	x[2]=m/5;

	x[1]=h;
	trace3(x[1],x[2],x[3]);
	if(t2<t1)swap(t1,t2);

	int cnt=0;

	for(int i=1;i<=3;i++)
	{
		if(x[i]>=t1&&x[i]<t2)
			cnt++;
	}
	if(cnt==0||cnt==3)
		cout<<"YES";
	else
		cout<<"NO";





    return 0;


}