#include <bits/stdc++.h>
#define MOD 1000000007LL
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int h,m,s,t[2];
int tale[100000];

bool func(int x){
	if(x==t[1])return true;
	tale[x]=-1;
	int xp=(x+1)%(3600*12);
	if(tale[xp]!=-1 && func(xp))return true;
	xp=(x-1+3600*12)%(3600*12);
	if(tale[xp]!=-1 && func(xp))return true;
	return false;
}

int main(void){
	scanf("%d%d%d%d%d",&h,&m,&s,&t[0],&t[1]);
	h%=12;
	tale[h*3600+m*60+s]=-1;
	tale[m*720+s*12]=-1;
	tale[s*720]=-1;
	t[0]%=12;
	t[1]%=12;
	t[0]*=3600;
	t[1]*=3600;
	printf("%s\n",func(t[0])?"YES":"NO");
	return 0;
}