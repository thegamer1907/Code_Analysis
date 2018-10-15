#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn=200005;
char s1[maxn],s2[maxn];
int a[maxn],n,n1,ans;
bool flag[maxn];
bool check(void){
    int p=1;
    for(int i=1;i<=n;i++){
        if(flag[i]) continue;
        if(s1[i]==s2[p]) p++;
        if(p>n1) return 1;
    }
    return 0;
}

int main(){
    cin>>s1+1;
    cin>>s2+1;
    n=strlen(s1+1);
    n1=strlen(s2+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    int l=0,r=n;
    while(l<=r){
        memset(flag,0,sizeof flag);
        int mid=(l+r)/2;
        for(int i=1;i<=mid;i++)
            flag[a[i]]=1;
        if(check()){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans<<endl;
    return 0;
}
