#include<bits/stdc++.h>

#define N 500005

using namespace std;

int n,a[N];
long long t[N],tri,sum=0,sig[N];

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
	read(n);
	for(register int i=1;i<=n;i++)
	read(a[i]),sum+=a[i],sig[i]=sum;
}

int main(){
	init();
	if(sum%3!=0){
		puts("0");
		return 0;
	}
	tri=sum/3;
	for(register int i=1;i<n;i++){
		if(sig[i]==tri*2)
		t[i]=1;
	}
	t[n]=0;
	for(register int i=n-1;i>=1;i--)
	t[i]+=t[i+1];
	long long ans=0;
	for(register int i=1;i<n-1;i++)
	if(sig[i]==tri)
	ans+=t[i+1];
	cout<<ans<<endl;
	return 0;
}
