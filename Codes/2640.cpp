#include<bits/stdc++.h>
using namespace std;
typedef int  LL;
#define rep(i,n)  for(int i=0;i<n;i++)
const int N=1e7+5;
LL ar[N],vis[N],cnt=0,n,m;
LL A[N],B[N],C[N],D[N];
void prime()
{
    vis[1]=1;
    for(int i=4;i<=10000000;i+=2)  vis[i]=1;
    ar[cnt++]=2;
    for(int i=3;i<=sqrt(10000000);i+=2)
    {
        for(int j=i*i;j<=10000000;j+=(2*i))  vis[j]=1;
    }
    for(int i=3;i<=10000000;i+=2) if(vis[i]==0)  ar[cnt++]=i;

    ar[cnt++]=10000001;

    //cout<<"D  "<<cnt<<endl;


}

int main()
{
	// ios_base::sync_with_stdio(0);
	// cin.tie(NULL); cout.tie(NULL);
	// freopen("in.txt","r",stdin);

	prime();

	//cin>>n;

	scanf("%d",&n);
	rep(i,n)  scanf("%d",&A[i]);
	rep(i,n)  B[A[i]]++;

	for(int i=0;i<cnt;i++)
    {
        for(int j=ar[i];j<=10000000;j+=ar[i])
        {
            C[ar[i]]+=B[j];
        }
    }



    D[1]=0;

    for(int i=2;i<=10000001;i++)  D[i]=D[i-1]+C[i];

    int q; cin>>q;

    LL a,b;
    while(q--)
    {
       scanf("%d%d",&a,&b);
        b=min(b,10000000);
        a=min(a,10000000);

        //a--;
        while(vis[a]==1  and a<=10000000) a++;
        while(vis[b]==1  and b>=1) b--;

        if(a>b) printf("0\n");
        else
        printf("%d\n",D[b]-D[a-1]);
    }

	return 0;
}
