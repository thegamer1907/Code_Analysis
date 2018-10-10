#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
const int MAXN=1e5+5;
const int INF=1e9+7;
int a[MAXN];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)    scanf("%d",&a[i]);
    int ans,need=INF;
    for(int i=0;i<n;i++){
        a[i]-=i;
        a[i]=max(0,a[i]);
    //    printf("a[i] = %d\n",a[i]);
        int t=a[i]/n;
        if(a[i]%n)  t++;
    //    printf("t: %d\n",t);
        if(t<need){
            need=t;
            ans=i+1;
        }
    }
    printf("%d\n",ans);
    return 0;
}
