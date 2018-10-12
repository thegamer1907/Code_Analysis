#include <bits/stdc++.h>

#define Pi 3.141592653589793
#define eps 1e-9
#define MAX int(1e9)
#define MIN int(-1e9)
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR0(n) for(int i=0;i<n;i += 1)
#define FOR1(n) for(int i=1;i<=n;i += 1)
#define FORn(n) for(int i=n-1;i>=0;i -= 1)
#define FOR(i,a,b,c) for(int i=a;i<b;i += c)
#define FORd(i,a,b,c) for(int i=a;i>=b;i -=c)
#define all(v) ((v).begin(),(v).end())
#define vi vector<int>
#define vlli vector<long long int>
#define vb vector<bool>
#define vvi vector<vector<int> >
#define vii vector<pair<int,int> >
#define lli long long int //range -> 9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
#define ui unsigned int // range -> 0 to 4,294,967,295
#define ulli unsigned long long int
#define F first
#define S second
#define PB push_back
#define sz size()
#define InF  2147483647
#define READ freopen("input.txt", "r", stdin);
#define WRITE freopen("output.txt", "w", stdout);
#define fast_io ios_base::sync_with_stdio(false)
#define SQR(n) ((n)*(n))
#define MEM(a,val) memset(a,val,sizeof(a))
using namespace std;
void test()
{

}
int main()
{
	cin.tie(0);
	cout.tie(0);
	set<string> a;
	string x;
	int n,m;
	int c=0;
	cin>>n>>m;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		a.insert(x);
	}
	for (int i = 0; i < m; ++i)
	{
		cin>>x;
		if(a.find(x)!=a.end())
			c++;
	}
	int a1=(n-c)+ c/2 + c%2;
	int b1=(m-c)+ c/2;
	if(a1>b1)
		cout<<"YES";
	else
		cout<<"NO";
}