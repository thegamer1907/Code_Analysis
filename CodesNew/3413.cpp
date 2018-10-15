#include<bits/stdc++.h>
using namespace std;

#define N 100005

int n,a[N],m,sig;

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
	
	read(n);read(m);
	for(int i=1;i<=n;++i)
	read(a[i]);
	
}

int main(){
	init();
	int mx=0,mm=INT_MAX;
	sig=m;
	for(int i=1;i<=n;++i)
	mx=max(mx,a[i]),sig=sig+a[i],mm=min(mm,a[i]);
	if(sig%n==0)
	cout<<max(sig/n,mx)<<" "<<mx+m<<endl;
	else cout<<max(sig/n+1,mx)<<" "<<mx+m<<endl;
	return 0;
}