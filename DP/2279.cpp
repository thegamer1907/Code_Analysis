#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll mod=1000000007;
bool ok[100010];
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n+1]={};
    set<int>s;
    int b[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=n-1;i>=0;i--){
        if(ok[b[i]]==true)a[i]=a[i+1];
        else a[i]=a[i+1]+1;
        ok[b[i]]=true;
    }
    while(m--){
        int l;
        scanf("%d",&l);
        cout<<-(a[n]-a[l-1])<<endl;
    }

    return 0;
}
