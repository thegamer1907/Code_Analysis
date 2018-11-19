#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<queue>
#include<vector>
#include<map>
#include<stack>
#define RG register
#define MAXN 1000010
#define LL long long int
using namespace std;
const int INF=1e9;
int n,m,s;
int t1,t2;
int id1,id2;
int p[4];
int main()
{
	//freopen("1.in","r",stdin);
  //freopen("1.out","w",stdout);
	 scanf("%d%d%d",&n,&m,&s);scanf("%d%d",&t1,&t2);
	 if(t1>=12) t1-=12;if(t2>=12) t2-=12;
	 if(n>=12) n-=12;
	 t1=t1*300;t2=t2*300;
	 n=n*300;m=m*60;s=s*60;
	 p[1]=n;p[2]=m;p[3]=s;
	 sort(p+1,p+4);
	 //cout<<p[1]<<" "<<p[2]<<" "<<p[3]<<endl;
	 if(t1<=p[1]||t1>p[3]) id1=1;
	 else
		 if(t1>p[1]&&t1<=p[2]) id1=2;
	 else
		 if(t1>p[2]&&t1<=p[3]) id1=3;
	 if(t2<=p[1]||t2>p[3]) id2=1;
	 else
		 if(t2>p[1]&&t2<=p[2]) id2=2;
	 else
		 if(t2>p[2]&&t2<=p[3]) id2=3;
	 //	 cout<<id1<<" "<<id2<<endl;
	 if(id1!=id2) cout<<"NO"<<endl;
	 else cout<<"YES"<<endl;
	 return 0;
}
