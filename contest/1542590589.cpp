#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define INF 1061109567
#define maxn 110
int n;
char a,b;
char x[maxn],y[maxn];

int main(){
    //freopen("in.in","r",stdin);
    scanf("%c%c\n",&a,&b);
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%c%c\n",&x[i],&y[i]);
        if(x[i]==a&&y[i]==b) {printf("YES");return 0;}
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(y[i]==a&&x[j]==b) {printf("YES");return 0;}
    printf("NO");
}