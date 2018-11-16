#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<climits>
#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<bitset>
#include<complex>
#include<map>
#include<algorithm>

using namespace std;

#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vs vector<string>
#define vvi vector<vector<int> >
#define vpii vector<pair<int,int> >
#define mp make_pair
#define pb push_back
#define reset(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))
#define PI acos(-1)
#define sqr(x) ((x)*(x))
#define all(a) a.begin(),a.end()

int main(void)
{
	int n;
	while(~scanf("%ld",&n))//cin>>n;
	//vi v(n+1);
	{
        long v[10000]={0},i,lv=1,c,k;
        for(i=0;i<n;i++)
		scanf("%ld",&v[i+1]);
		for(i=1;i<=n;i++)
		{
		     c=1,k=i;
		     while(v[k]!=-1)
		     {
		         k=v[k];
		         c++;
             }
             if(c>lv)
             lv=c;
        }
        printf("%ld\n",lv);
	}
	return 0;
}
