#include<bits/stdc++.h>



using namespace std;

int num,q;

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
	read(q);
}

int calc(int number){
	int dig=0;
	while(number>0){
		dig+=number%10;
		number/=10;
	}
	return dig;
}

int main(){
	init();
	num=18;
	while(q){
		num++;
		if(calc(num)==10)
		q--;
	}
	writeln(num);
	return 0;
}
