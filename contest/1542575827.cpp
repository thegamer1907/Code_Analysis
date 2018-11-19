
/*******************************************************************
  author : touchme-o
 problem : Bark to Unlock 
    time : 2017-10-05 19:45:55
 *******************************************************************/

#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <time.h>
#include <limits.h>
#include <assert.h>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <list>
#include <bitset>
#include <vector>
using namespace std;

#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define For(i,n) for(int i=1;i<=n;i++)
#define Fork(i,k,n) for(int i=k;i<=n;i++)
#define Rep(i,n) for(int i=0;i<n;i++)
#define ForD(i,n) for(int i=n;i;i--)
#define ForkD(i,k,n) for(int i=n;i>=k;i--)
#define RepD(i,n) for(int i=n;i>=0;i--)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define vi vector<int>
#define pi pair<int,int>
#define Pr(kcase,ans) printf("Case #%d: %lld\n",kcase,ans);
#define PRi(a,n) For(i,n-1) cout<<a[i]<<" "; cout<<a[n]<<endl;
#define lowbit(x) ((x)&-(x))
#define SI(a) ((a).size())
#define MEM(a) memset(a,0,sizeof(a));
#define MEMI(a) memset(a,0x3f,sizeof(a));
#define MEMi(a) memset(a,128,sizeof(a));
#define MEMx(a,b) memset(a,b,sizeof(a));
#define MAX 35
#define INF (0x3f3f3f3f)
#define F (1000000007)
#define LL long long
string password,t[105];
int n;
int main(int argc, char const *argv[])
{
	// fstream cin("data.in");
	cin>>password>>n;
	For(i,n) cin>>t[i];
	bool flag = false , flag1 = false , flag2 = false;
	For(i,n) {
		if(flag || (flag1 && flag2)) break;
		if(t[i] == password) flag = true;
		if(t[i][0] == password[1]) flag2 = true;
		if(t[i][1] == password[0]) flag1 = true;
 	}
 	if(flag || (flag2 && flag1)) puts("YES");
 	else puts("NO");
	return 0;
}
