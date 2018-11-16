#include<bits/stdc++.h>
using namespace std;
typedef long long   ll;
const ll inf = 1e8;
#define repp(x,n) for(__typeof(n) x=1;x<=(n);x++)
#define rep(x,n) for(__typeof(n) x=0;x<(n);x++)
#define sf(n)       scanf("%lld", &n)
#define sff(a,b)    scanf("%lld %lld", &a, &b)
#define pf(a)  printf("%lld\n",a)
#define pff(a,b)  printf("%lld %lld\n",a,b)
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define READ freopen("double helix.txt","r",stdin)
ll br[1001];
int main(){
    ll tmp=0,n,sum=0,m,ans,x,Min=inf,ar[100001],cnt=0,br[100001],cr[1001],a=0,b=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='A' && s[i+1]=='B')
            {
                ar[a]=i;
                a++;
            }
        else if(s[i]=='B' && s[i+1]=='A')
            {
                br[b]=i;
                b++;
            }
    }
      sort(ar,ar+a);
      sort(br,br+b);
      //cout<<ar[0]<<"  "<<br[b-1]<<"  "<<ar[a-1]<<"  "<<br[0]<<endl;
      if( (a>0 &&b>0) && ( abs(ar[0]-br[b-1])>=2  || abs(ar[a-1]-br[0])>=2 ) )
        puts("YES");
      else puts("NO");
    return 0;
}

