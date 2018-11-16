#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;
int save[105];
int main(void){
    int n;scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x;scanf("%d",&x);
        save[x]=i;
    }
    for(int i=1;i<=n;i++){
        printf("%d%c",save[i],(i==n)?'\n':' ');
    }
    return 0;
}