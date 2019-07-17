#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const int maxn = 100050; 

ll A[maxn];
ll n,k;
int m;

int main()
{
#ifdef LOCAL
    freopen("in.txt","r",stdin);
#endif
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)
        scanf("%lld",&A[i]);
    int pos=0;
    int ans=0;
    ll right=k;
    while(pos<m){
        ll tmp=0;
        while(A[pos]<=right){
            tmp++;
            pos++;
        }
        //cout<<tmp<<" "<<pos<<endl;
        if(!tmp)
            right+=k;
        else{ 
            right+=tmp;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}