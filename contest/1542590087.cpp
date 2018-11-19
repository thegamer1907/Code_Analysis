#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<set>
#include<vector>
#include<queue>
#include<ctime>
#include<cstdlib>
#define ll long long
#define MAXN 105
using namespace std;
ll N,bj;char A[MAXN],B[MAXN],L,R;
int main()
{
	ios::sync_with_stdio(false);
    ll i,j;cin>>L>>R>>N;
    for(i=1;i<=N;++i)
	{
		cin>>A[i]>>B[i];
		if(A[i]==L&&B[i]==R)bj=1;
		if(B[i]==L&&A[i]==R)bj=1;
	}
    if(bj)
	{
		puts("YES");
		return 0;
	}
    for(i=1;i<=N;++i)
        for(j=1;j<=N;++j)
        if(i!=j)
        {
        	if(L==B[i]&&R==A[j])
        	{
        		puts("YES");
				return 0;
        	}
        }
    puts("NO");
	fclose(stdin);
	fclose(stdout);
	return 0;
}

