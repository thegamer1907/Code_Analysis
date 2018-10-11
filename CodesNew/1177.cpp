#include<bits/stdc++.h>
using namespace std;

#define N 100005

int a[N],n;

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

int main(){ 
	int mn;
	mn=INT_MAX; 
	read(n);
	for(int i=1;i<=n;i++){
		read(a[i]);
		mn=min(a[i],mn);
	}
	for(int i=1;i<=n;i++)
		a[i]-=mn;
	int t=mn%n+1;
	for(int i=0;;i++){
		if(a[t]-i<=0){
			cout<<t<<"\n";
			return 0;
		}
		t=t%n+1;
	}
	return 0;
}
