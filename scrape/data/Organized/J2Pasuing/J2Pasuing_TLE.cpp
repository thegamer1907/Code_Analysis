#include<iostream>
#include<cstring>
#include<cmath>
#include<queue>
#include<algorithm>
#define LL long long
#define INF 0x3f3f3f3f
using namespace std;
const int N=2e5+100;

LL arr[N];
int main() {
    LL p,up,group,pre,ans;
    LL n,m,k;
    while(cin>>n>>m>>k) {
        memset(arr,0,sizeof(arr));
        pre=ans=0;
        p=1;
        for(int i=1; i<=m; i++)cin>>arr[i];

        while(p<=m) {
            
            
            up=ceil(1.0*(arr[p]-pre)/k)*k+pre;
            
            while(arr[p]<=up&&p<=m) {
				pre++;
				p++;
            }
            ans++;
            
        }
        cout<<ans<<endl;


    }
    return 0;

}