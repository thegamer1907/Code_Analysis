#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>
#include <algorithm>
int n,k;
const int maxn = 1e5+9;
char s[maxn];
int a[maxn], b[maxn];

int min(int a, int b){
    return a>b?b:a;
}
int max(int a, int b){
    return a<b?b:a;
}

int cou(int r, int l){
    return min(a[r]-a[l-1], b[r]-b[l-1]);
}

int main(){
    scanf("%d%d%s",&n,&k,s+1);
    for(int i = 1; i <= n; i++){
        if(s[i] == 'a') a[i]++;
        else b[i]++;
        a[i] += a[i-1];
        b[i] += b[i-1];
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        int l=1,r=i;
        while(l<=r){
            int mid = (l+r)>>1;
            if(cou(i,mid)>k) l = mid+1;
            else r = mid-1;
        }
        //printf("%d:%d\n",i,l);
        ans = max(ans, i-l+1);
    }
    printf("%d\n",ans);
}
