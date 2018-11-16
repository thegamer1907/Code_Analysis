#include <bits/stdc++.h>
using namespace std;

const int OO = 0x3f3f3f3f ,N = 1e5+5 ,mod = 1e9+7 ;
const double pi = acos(-1) ,EPS = 1e-8 ;
#define read(FILE)  freopen(FILE, "r", stdin);
#define write(FILE) freopen(FILE, "w", stdout);
#define BeatMeIFUCAN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll ;

int t ,k ,a ,b ,ans[N]={1} ;
int main(){
    scanf("%d%d",&t,&k);
    for(int i=1;i<N;++i){
        if(i>=k)ans[i]=ans[i-k];
        ans[i]=(ans[i]+ans[i-1])%mod;
    }
    for(int i=1;i<N;++i)ans[i]=(ans[i]+ans[i-1])%mod;
    while(t--){
        scanf("%d%d",&a,&b);
        printf("%d\n",((ans[b]-ans[a-1])%mod+mod)%mod);
    }
	return 0;
}
