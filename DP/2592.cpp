#include<bits/stdc++.h>
using namespace std;
int n,a[100005];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int maxx=0;
    int cnt=1;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]) cnt++;
        else{
            maxx=max(cnt,maxx);
            cnt=1;
        }
    }
    maxx=max(cnt,maxx);
    printf("%d\n",maxx);
    return 0;
}