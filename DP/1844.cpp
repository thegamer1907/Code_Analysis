//Malfurion_Drake
#include<bits/stdc++.h>
using namespace std;

string st;
int len;
vector<int>Str[2];

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
	cin>>st;
}


int main(){
	init();
	len=st.size();
	st='?'+st;
	for(int i=1;i<len;++i)
	if(st[i]=='A'&&st[i+1]=='B')
	Str[0].push_back(i);
	for(int i=1;i<len;++i)
	if(st[i]=='B'&&st[i+1]=='A')
	Str[1].push_back(i);
	//AB -> Pos of A
	//BA -> Pos of B
	for(int i=0;i<Str[0].size();++i){
		for(int j=0;j<Str[1].size();++j)
		if(Str[0][i]!=Str[1][j]+1&&Str[0][i]+1!=Str[1][j]){
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
} 
