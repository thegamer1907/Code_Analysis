#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int f[1<<4];
int n , k , x ;

int main(){

scanf("%d %d",&n,&k);
for(int i=0;i<n;i++){
    int msk=0;
    for(int j=0;j<k;j++){
        scanf("%d",&x);
        msk|=(x<<j);
    }
    f[msk]++;
}

if( f[0] ){
    printf("YES\n");
    return 0;
}

for(int i=0;i<(1<<k);i++)
    for(int j=0;j<(1<<k);j++)
if( f[i] && f[j] && ((i&j)==0) ){
    printf("YES\n");
    return 0;
}


printf("NO\n");
return 0;
}
