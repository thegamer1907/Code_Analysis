#include<bits/stdc++.h>
using namespace std;
const int maxn=200010;
int a,b;
int main()
{
    scanf("%d%d",&a,&b);
    for(int i=0;i<=b;i++){
        if(a>b) return printf("%d\n",i),0;
        a*=3; b*=2;
    }
    return 0;
}
