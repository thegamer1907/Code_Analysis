/**
    Bismillahir Rahmanir Rahim
    Md. Rakibul Islam
    Dept. of CSE, CoU
**/
#include<bits/stdc++.h>
#define SQR(n) (n*n)
#define CHR getchar()
#define NL printf("\n")
#define PI 2.0*acos(0.0)
#define ll              long long int
#define ull             unsigned long long int
#define sc              scanf
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        ((a)*(b))/gcd(a,b)
#define pf              printf
#define MOD             1000000007
#define mx              123456789
#define Max(a,b) ((a>b)?a:b)
#define Min(a,b) ((a<b)?a:b)
#define ff first
#define D double
#define sz size()
#define ss second
#define PB push_back
#define MP make_pair
#define all(a) a.begin(),a.end()
using namespace std;
vector<int>vec[100001];
bool visit[100001]={false};
void DFS(int u)
{
	int len, i;
	visit[u]=true;
	len=vec[u].size();
	for(i=0; i<len; i++)
	{
		if(!visit[vec[u][i]])
		{
			DFS(vec[u][i]);
		}
	}
}
int main() {
	int n, t, i, a;
	scanf("%d %d", &n, &t);
	for(i=1; i<n; i++)
	{
		scanf("%d", &a);
		vec[i].push_back(i+a);
	}
	DFS(1);
	if(!visit[t])
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}
