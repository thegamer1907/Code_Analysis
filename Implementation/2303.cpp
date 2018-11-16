#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char str[57];
int main(void){
    int n,cnt=0;scanf("%d%s",&n,str);
    for(int i=1;i<n;i++) if(str[i]==str[i-1]) cnt++;
    printf("%d\n",cnt);
    return 0;
}
