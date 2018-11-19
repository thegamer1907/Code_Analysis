#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define F first
#define S second
#define pb push_back
#define fo(i, n) for(int i = 1; i <= n; ++i)

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int N = 200200;
const int mod = 1e9 + 7 ;
int bad[100000];
int used[100000];
int h,m,s,t1,t2,t1a,t2a;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	cin>>h>>m>>s;
	const int all=3600*12;
	int timer=(h*3600+m*60+s) %all;
	int mtimer = (m*60+s)%3600;
	int ha=(timer);
	int ma=(mtimer*all/3600);
	int sa=(s*all/60);
	cin>>t1>>t2;
	t1a=(t1*3600)%all;
	t2a=(t2*3600)%all;
	bad[ha]=1;
	bad[ma]=1;
	bad[sa]=1;
	queue<int> q;
	q.push(t1a);
	used[t1a]=1;
	cerr<<t1a<<' '<<t2a<<' '<<ha<<' '<<ma<<' '<<sa<<endl;
	while(!q.empty())
	{
		int v=q.front();
		q.pop();
		for(int i=-1;i<=1;i+=2)
		{
			int to=(v+i+all)%all;
			if(!used[to]&&!bad[to])
			{
				used[to]=1;
				q.push(to);
			}
		}
	}
	if(used[t2a])
		cout << "YES";
	else
		cout<<"NO";
	return 0;
}
               