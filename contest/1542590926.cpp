#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<ctime>
#include<cassert>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<bitset>
using namespace std;
//char Input[40*1024*1024+5],*pos;
//#define Read() (strtol(pos,&pos,10))
#ifndef Read
int Read(){
	int ret=0,sgn=1;
	char ch;
	while(isspace(ch=getchar()));
	if(ch=='-'){
		sgn=-1;
		ch=getchar();
	}
	do{
		ret=ret*10+(ch-'0');
	}while(isdigit(ch=getchar()));
	return ret*sgn;
}
#endif
string PassWord;
bool Have1[100],Have2[100];
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
//#ifdef Read
//	fread(Input,40*1024*1024,1,stdin);
//	pos=Input;
//#endif
	cin>>PassWord;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		string Tmp;
		cin>>Tmp;
		if(Tmp==PassWord){
			puts("YES");
			return 0;
		}
		Have1[ Tmp[0]-'a' ]=1;
		Have2[ Tmp[1]-'a' ]=1;
	}
	if(Have1[ PassWord[1]-'a' ]&&Have2[ PassWord[0]-'a' ])
		puts("YES");
	else puts("NO");
	return 0;
}

