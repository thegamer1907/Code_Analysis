
#include<algorithm>

#include<iostream>

#include<string>

#include<map>//int dx[4]={0,0,-1,1};int dy[4]={-1,1,0,0};

#include<set>//int gcd(int a,int b){return b?gcd(b,a%b):a;}

#include<vector>

#include<cmath>

#include<stack>

#include<string.h>

#include<stdlib.h>

#include<cstdio>

#define maxn (6*100000)

#define UB (maxn*64)

#define ll __int64

#define INF 10000000

using namespace std;

int seq[maxn],vis[maxn],n;

 

int main()

{

     scanf("%d",&n);

    for(int i=1;i<=n;scanf("%d",&seq[i++]) );

    sort(seq+1,seq+n+1);

 

    int cnt=n,tp=0;

    for(int i=n/2;i>=1;i--)

    {

        if(seq[i]*2<=seq[cnt])

        {

            cnt--;

            tp++;

        }

    }


    printf("%d\n",n-tp);

    return 0;

}
