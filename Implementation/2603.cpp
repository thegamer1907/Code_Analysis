#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main(void){
    int n;scanf("%d",&n);
    int cnt=0;
    while(n--){
        int a,b;scanf("%d%d",&a,&b);
        if(b-a>=2) cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
