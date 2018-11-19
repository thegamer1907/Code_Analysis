#include<cstdio>
#include<cstring>
#include<cctype>
#include<cmath>
#include<algorithm>
#define ll long long
using namespace std;
int read(){
    char c;int s=0,t=1;
    while(!isdigit(c=getchar()))if(c=='-')t=-1;
    do{s=s*10+c-'0';}while(isdigit(c=getchar()));
    return s*t;
}
/*------------------------------------------------------------*/
const int inf=0x3f3f3f3f;

int n,kind,a[100010];
bool c[10000];

int main(){
    n=read();kind=read();
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=kind;j++)a[i]=(a[i]<<1)+read();
    	c[a[i]]=1;
    }
    if(c[0]){printf("YES");return 0;}
    for(int i=1;i<(1<<kind);i++)if(c[i]){
    	int x=i^((1<<kind)-1);
    	for(int j=1;j<(1<<kind);j++)if(c[j]&&(x&j)==j){printf("YES");return 0;}
    }
    printf("NO");
    return 0;
}
