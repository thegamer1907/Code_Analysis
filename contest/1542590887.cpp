#include<bits/stdc++.h>
#define N 110
#define RG register
using namespace std;
int n;
bool flag1,flag2;
char bak[5],pas[5];
inline int gi(){
    RG int x=0;RG char c=getchar();
    while(c<'0'||c>'9') c=getchar();
    while(c>='0'&&c<='9') x=x*10+c-'0',c=getchar();
    return x;
}
int main(){
    //freopen("A.in","r",stdin);
    //freopen("A.out","w",stdout);
    scanf("%s",pas);
    n=gi();
    for (RG int i=1;i<=n;++i){
	scanf("%s",bak);
	if(bak[0]==pas[0]&&bak[1]==pas[1]){
	    puts("YES");
	    return 0;
	}
	if(bak[0]==pas[1]) flag1=1;
	if(bak[1]==pas[0]) flag2=1;
	if(flag1&&flag2){
	    puts("YES");
	    return 0;
	}
    }
    puts("NO");
    return 0;
}

