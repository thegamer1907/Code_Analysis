#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main(void){
    int k,n,w;scanf("%d%d%d",&k,&n,&w);
    int need=(1ll+w)*w/2*k;
    printf("%d\n",max(0,need-n));
    return 0;
}
