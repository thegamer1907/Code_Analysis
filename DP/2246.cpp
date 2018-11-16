#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e7+5;

int c[N];
bool ch[N];
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    for (int i=n-1;i>=0;i--){
        if (!ch[a[i]]) ++c[i],ch[a[i]]=1;
    }

    for (int i=n-2;i>=0;i--){
        c[i]+=c[i+1];
    }
    int x;
    while (m--){
        scanf("%d",&x);
        printf("%d\n",c[x-1]);
    }

    return 0;
}
