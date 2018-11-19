#include<bits/stdc++.h>
#define in read()
#define ll long long
#define db double
using namespace std;
namespace FastIO{
    const int L=1<<15;
    char buffer[L],*S,*T;
    inline char getchar(){
        if(S==T){T=(S=buffer)+fread(buffer,1,L,stdin);if(S==T)return EOF;}
		return *S++;
    }
    inline int read(){
        char c;int rec=0,f=1;
        for(c=getchar();c<'0'||c>'9';c=getchar())if(c=='-')f=-1;
        while(c>='0'&&c<='9')rec=(rec<<1)+(rec<<3)+(c-'0'),c=getchar();
        return rec*f;
    }
}using FastIO::read;
const int N=101001;
struct data{int to,next,len;}bian[N<<1];
int size=0,first[N];
void add(int x,int y,int z=0){
	size++;
	bian[size].next=first[x];
	first[x]=size;
	bian[size].to=y;
	bian[size].len=z;
}
int a[N][5],n,k;
int cnt[20];
int main()
{
	//freopen("in.in","r",stdin);
	n=in; k=in;
	for(int i=1;i<=n;i++)
	{
		int x,v=0;
		for(int j=0;j<k;j++) 
		{
			x=in;
			if(x) v=v+(1<<j);
		}
		cnt[v]++;
	}
	int tot=0;
	/*for(int S=0;S<(1<<k);S++)
	{
		int c=0;
		for(int i=0;i<k;i++)
			if(S&(1<<i)) c++;
		a[++tot]=(node){S,c,cnt[S]};
	}
	
	sort(a+1,a+tot+1,comp);
	if(cnt[0]){cout<<"YES";return 0;}
	*/
	if(cnt[0]) 
	{
		cout<<"YES";
		return 0;
	}
	for(int S1=0;S1<(1<<k);S1++)
	for(int S2=0;S2<(1<<k);S2++)
	{
		if(S1==S2)continue;
		bool flag=1;
		for(int i=0;i<k;i++)
			if(S1&(1<<i) && S2&(1<<i)) flag=0;
		if(flag && cnt[S1] &&cnt[S2])
		{
			cout<<"YES";
			return 0;
		}
	}
		
	cout<<"NO";
	return 0;
}
