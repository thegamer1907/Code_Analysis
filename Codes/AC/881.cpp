#include<bits/stdc++.h>
using namespace std;

#define N 100005 

int n,k,sig[2][N],p[21];

template<typename Drake>
void read(Drake &x){
	x=0;char ch=getchar();bool f=1;
	while(!isdigit(ch)){
		if(ch=='-')f^=1;
		ch=getchar();
	}
	while(isdigit(ch)){
		x=(x<<1)+(x<<3)+(ch^48);
		ch=getchar();
	}
	x*=(2*f-1);
}

template<typename Drake>
void write(Drake x){
	if(x<0){x=-x;putchar('-');}
	if(x>9)write(x/10);
	putchar(x%10+'0');
}

template<typename Drake>
void writeln(Drake x){
	write(x);
	puts("");
}

void init(){
	read(n);read(k);
	string s;
	cin>>s;
	s='?'+s;
	memset(sig,0,sizeof sig);
	for(int i=1;i<s.size();++i)
	sig[0][i]=sig[0][i-1]+(s[i]=='a');
	for(int i=1;i<s.size();++i)
	sig[1][i]=sig[1][i-1]+(s[i]=='b');
}

int check(int Len){
	for(int i=1;i+Len-1<=n;++i)
	if(sig[0][i+Len-1]-sig[0][i-1]<=k){
		return true;
	}
	for(int i=1;i+Len-1<=n;++i)
	if(sig[1][i+Len-1]-sig[1][i-1]<=k){
		return true;
	}
	return false;
} 

int main(){
	init();
	p[0]=1;
	for(int i=1;i<=20;++i)
	p[i]=p[i-1]*2;
	int l=0;
	for(int i=20;i>=0;--i)
	if(p[i]+l<=n&&check(p[i]+l)){
		l=p[i]+l; 
	}
	writeln(l);
	return 0;
}
