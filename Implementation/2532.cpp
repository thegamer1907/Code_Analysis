#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;
int save[105];
int main(void){
    int n,k;scanf("%d%d",&n,&k);
    int cnt=0;
    for(int i=0;i<n;i++){
        int x;scanf("%d",&x);
        if(x<=k) cnt+=1;
        else cnt+=2;
    }
    printf("%d\n",cnt);
    return 0;
}