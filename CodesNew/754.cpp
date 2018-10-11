#include<string.h>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
#define N 1005
char A[N][N];
char B[N][N];
int a[1005];
int b[1005];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)scanf("%s",A[i]);
    for(int i=0;i<m;i++)scanf("%s",B[i]);
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
        if(strcmp(A[i],B[j])==0){
            a[i]=1;
            b[j]=1;
        }
    }
    int x=0,y=0;
    for(int i=0;i<n;i++)if(!a[i])x++;
    for(int i=0;i<m;i++)if(!b[i])y++;
    int t = (n-x)%2;
    x+=t;
    if(x>y)printf("YES\n");
    else printf("NO\n");
}
