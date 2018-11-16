#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(void){
    int n,k;scanf("%d%d",&n,&k);
    int tot=240-k,cnt=0,time=0;
    while(tot>=time+(cnt+1)*5&&cnt<n) cnt++,time+=cnt*5;
    printf("%d\n",cnt);
    return 0;
}
