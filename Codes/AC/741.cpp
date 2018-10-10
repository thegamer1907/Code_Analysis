#include <bits/stdc++.h>
using namespace std;
inline int num(int x){
    int ans=0;
    while(x){
	ans+=x%10;
	x/=10;
    }
    return ans==10;
}
int main(){
    //freopen("2.in","r",stdin);
    //freopen("2.out","w",stdout);
    int k;
    scanf("%d",&k);
    int nw=1,cnt=0;
    while(cnt<k){
	cnt+=num(nw);
	nw++;
    }
    printf("%d\n",nw-1);
return 0;
}
