#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;
double PI=acos(-1);
int const N = 5e5 + 10,M=1e7+1, oo = 1e9;
const int mod = oo+7;
const ll  OO = 3e18;

int n,aa[N];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)cin>>aa[i];
    sort(aa,aa+n);
    int l=0,r=n/2,mid,res=0;
    while(l<=r){
        mid=(l+r)>>1;
        int j=n-1,i=mid-1;
        while(i>-1){
            if(aa[i]*2>aa[j])break;
            i--,j--;
        }
        if(i==-1){
            l=mid+1;
            res=n-mid;
        }else r=mid-1;
    }
    cout<<res;
    return 0;
}