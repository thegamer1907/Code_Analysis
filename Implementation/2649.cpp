#include<cstdio>
using namespace std;
int main(){
    long long x;
    scanf("%I64d",&x);
    if(x&1)printf("%I64d\n",-(x/2+1));
    else printf("%I64d\n",x/2);
}
