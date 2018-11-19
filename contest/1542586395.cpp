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
int n;
char c1,c2;
string a[N];
int main()
{
//	freopen("in.in","r",stdin);
//	scanf("%c%d",&c1,&c2,&n);
	cin>>c1>>c2>>n;
	bool vis1=0,vis2=0;
	for(int i=1;i<=n;i++)
	{
		char a,b;
		cin>>a>>b;
		if(b==c1) vis1=1;
		if(a==c2) vis2=1;
		if(a==c1 && b==c2){
			cout<<"YES";
			return 0;
		}
	}
	if(vis1 && vis2) cout<<"YES";
	else cout<<"NO";
	return 0;
}
