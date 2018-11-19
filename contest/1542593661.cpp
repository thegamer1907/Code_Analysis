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



int main()
{
    //ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	cin>>s;
	int n;
	cin>>n;
	int a=0;
	int b=0;
	for(int i=1;i<=n;i++)
	{
		string x;
		cin>>x;
		if(x==s)
		{
			cout<<"YES";return 0;
		}

		if(x[1]==s[0])a=1;
		if(x[0]==s[1])b=1;
	}

	if(a+b==2)
		cout<<"YES";
	else
		cout<<"NO";





    return 0;


}