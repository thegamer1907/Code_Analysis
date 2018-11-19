#include<bits/stdc++.h>
#define lsc(x) scanf("%lld",&x)
#define sc(x) scanf("%d",&x)
#define lpr(x) printf("%lld ",x)
#define pr(x) printf("%d ",x)
#define n_l printf("\n")
#define VI vector<int>
#define VII vector<long long int>
#define m_p make_pair
#define pb push_back
#define fi first
#define se second
#define mset(x,y) memset(x,y,sizeof(x))
using namespace std;
const int N=(int)1e6+5;
const int mod = 1000000007;
typedef long long ll;

int main(){
    float h,m,s;
    cin >>h>>m>>s;
    if (h==12) h=0.0;
    float angs=(s)*6;
    float mhand=(m+(s/60.0));
    float hhand=(h+(mhand/60));
    float angm=mhand*6;
    float angh=hhand*30;
//    cout<<s<<" "<<angs<<endl;
  //  cout<<m<<" "<<mhand<<" "<<angm<<endl;
   // cout<<h<<" "<<hhand<<" "<<angh<<endl;
    float a1,a2;cin >>a1>>a2;
    if (a1==12) a1=0.0;
    if (a2==12) a2=0.0;
    float anga1=a1*30;
    float anga2=a2*30;
    if (anga1>anga2) swap(anga1,anga2);
    int flag=0;
    //cout<<anga1<<" "<<anga2<<endl;
    if (angs>anga1 && angs<anga2) flag++;
    if (angm>anga1 && angm<anga2) flag++;
    if (angh>anga1 && angh<anga2) flag++;
    if (flag==1 || flag==2) cout<<"NO\n";
    else cout<<"YES\n";
    return 0;
}

