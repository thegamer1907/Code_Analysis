#include <bits/stdc++.h>
using namespace std;
char pw[10];
char can[110][10];
int main(){

    int n;
    scanf("%s",pw);
    scanf("%d",&n);
    bool yes=false;
    for(int i=0;i<n;i++){
        scanf("%s",can[i]);
        if(can[i][0]==pw[0]&&can[i][1]==pw[1])  yes=true;
    }
    if(yes){
        printf("YES\n");
        return 0;
    }
    for(int i=0;i<n&&!yes;i++){
        for(int j=i;j<n&&!yes;j++){
            if((can[i][0]==pw[1]&&can[j][1]==pw[0])||(can[j][0]==pw[1]&&can[i][1]==pw[0])){
                yes=true;
            }
        }
    }
    if(yes) printf("YES\n");
    else    printf("NO\n");
    return 0;
}

