#include <bits/stdc++.h>

#define INF 214000000
#define MOD 998244353
#define MaxN 200005

using namespace std;

/*#ifdef INFOARENA
FILE* IN=fopen("bacterii2.in","r"), *OUT=fopen("bacterii2.out","w");
#else
FILE* IN=fopen("test.in","r"), *OUT=fopen("test.out","w");
#endif*/

int N;
int v[MaxN];
int main()
{
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        int x;
        cin>>x;
        v[x]=i;
    }
    for(int i=1;i<=N;i++)
        cout<<v[i]<<' ';
    return 0;
}
