//
#include<bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;
const int maxn = 1e2+5;
typedef long long ll;
char s[maxn][3],a[3];
int n;
int main(){
    scanf("%s",a);
    scanf("%d",&n);
    bool flag = false;
    bool flag1 = false,flag2 = false;
    for(int i=0;i<n;i++){
        scanf("%s",s[i]);
        if(s[i][0] == a[0] && s[i][1] == a[1])flag = true;
        if(s[i][0] == a[1] && s[i][1] == a[0])flag = true;
        if(s[i][1] == a[0]) flag1 = true;
        if(s[i][0] == a[1]) flag2 = true;
    }
    if(flag1 && flag2){
        flag = true;
    }
    if(flag){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
