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
db h,m,s;
db S,T;
struct node{
	db tim; bool flag;
}a[10];
bool comp(node a,node b)
{
	return a.tim<b.tim;
}
void solve1()
{
	int p1=-1,p2=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i].flag) 
		{
			if(p1==-1) p1=i;
			else p2=i;
		}
	}
//	cout<<p1<<' '<<p2<<endl;
	if((p2==p1+1)|| (p1==0 && p2==4)) cout<<"YES";
	else cout<<"NO";
}
int main()
{
//	freopen("in.in","r",stdin);
	cin>>h>>m>>s>>S>>T;
	m+=s/60;
	h+=m/60;
	h/=12; if(h>=1) h-=1.0;
	m/=60; if(m>=1) m-=1.0;
	s/=60; if(s>=1) s-=1.0;
	S/=12; if(S==1) S=0; 
	T/=12; if(T==1) T=0;
	a[0]=(node){h,0};
	a[1]=(node){m,0};
	a[2]=(node){s,0};
	a[3]=(node){S,1};
	a[4]=(node){T,1};
	n=5;
	sort(a,a+5,comp);
	solve1();
	
	return 0;
}
