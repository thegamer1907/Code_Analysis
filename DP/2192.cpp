#include<bits/stdc++.h>
using namespace std;

#define N 100005

int n,b[N],m,h[N];
struct data{
	int i,num,ans;
}a[N];

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
	for(register int i=1;i<=n;i++){
		read(b[i]);
	}
	for(register int i=1;i<=m;i++){
		read(a[i].num);a[i].i=i;
	}
}

bool cmpnum(data cmp1,data cmp2){
	return(cmp1.num>cmp2.num);
}

bool cmpi(data cmp1,data cmp2){
	return(cmp1.i<cmp2.i);
}

int main(){
	init();
	sort(a+1,a+m+1,cmpnum);
	int las,j,Ans;
	las=n+1;
	Ans=0;
	a[m+1].num=-1;
	for(register int i=1;i<=m;i++){
		
		for(j=las-1;j>=a[i].num;j--){
			
			h[b[j]]++;
			if(h[b[j]]==1)
			Ans++;
			
		}
		
		a[i].ans=Ans;
		las=a[i].num;
		
	}
	sort(a+1,a+m+1,cmpi);
	for(register int i=1;i<=m;i++)
	writeln(a[i].ans);
	return 0;
}
