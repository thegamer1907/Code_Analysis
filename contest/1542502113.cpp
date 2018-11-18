#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,n) for(int i = a; i < n;i++)
#define FORR(i,a,n) for(int i = a; i >n;i--)
#define ri(x) scanf("%d",&x)
#define rii(x,y) ri(x),ri(y)
#define mp make_pair
#define pb push_back
#define S second
#define F first

typedef long long ll;
int n, k;
vector<int> v;
map<int,int> mapa;
void getPairs(int a, int i, int acc)
{
	if(i == k)
		v.pb(acc);
	else
	{
		getPairs(a,i+1,acc);
		if(!(a&(1<<i)))
			getPairs(a,i+1, acc+(1<<i));
	}
}
int main(){
	rii(n,k);
	int ks[4];
	int flag = 0;
	vector<int> ac;
	FOR(i,0,n)
	{
		int acc = 0;
		FOR(j,0,k)
		{
			ri(ks[j]);
			if(ks[j])
				acc+= (1<<j);
		}
		if(acc == 0)
			flag = 1;
		mapa[acc]=1;
		ac.pb(acc);
	}
	if(flag)
	{
		printf("YES\n");
		return 0;
	}
	FOR(i,0,n)
	{
		v.clear();
		getPairs(ac[i],0,0);
		FOR(i,0,v.size())
			if(mapa.find(v[i])!=mapa.end())
			{
				printf("YES\n");
				return 0;
			}

	}
	printf("NO\n");
	return 0;
}