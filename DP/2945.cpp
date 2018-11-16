#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
char s[N];
int n, k, l = 1, r, mid;
bool C(int ln){
    int D[2]; D[0] = D[1] = 0;
    for(int i=0;i<ln;i++) D[s[i]-'a']++;
    if(min(D[0], D[1])<=k) return(1);
    for(int i=ln;i<n;i++){
        D[s[i]-'a']++;
        D[s[i-ln]-'a']--;
        if(min(D[0], D[1])<=k) return(1);
    }
    return(0);
}
int main(){
    scanf("%d %d %s", &n, &k, s);
    r = n+1;
    while(r-l>1){
        mid = ((l+r)>>1);
        if(C(mid)) l = mid;
        else r = mid;
    }
    printf("%d", l);
}
