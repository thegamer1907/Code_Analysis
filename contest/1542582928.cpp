#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n,k;
int check[20],num[10];
int main(){
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
        int tmp = 0;
        for(int j=0;j<k;j++){
            int l;
            cin >> l;
            tmp = tmp*2+l;
        }
        check[tmp] = 1;
    }
    for(int i=1;i<(1<<(1<<k));i++){
        bool chk = true;
        int cnt = 0;
        for(int j=0;j<(1<<k);j++){
            if(i&(1<<j)){
                if(!check[j]){
                    chk = false;
                    break;
                }
                cnt++;
            }
        }
        memset(num,0,sizeof(num));
        if(!chk) continue;
        for(int j=0;j<(1<<k);j++){
            if(i&(1<<j)){
                for(int l=0;l<k;l++){
                    if(j&(1<<l)){
                        num[l] += 1;
                    }
                }
            }
        }
        for(int j=0;j<k;j++){
            if(num[j]>(cnt/2)){
                chk = false;
                break;
            }
        }
        if(!chk) continue;
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;
}
