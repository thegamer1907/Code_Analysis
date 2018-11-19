///*BISMILLAHIR RAJMANIR RAHIM*///
#include<bits/stdc++.h>
using namespace std;
string chk[110];
int main(){
    string pass,scr,tmp;
    int n,i;
    cin>>pass;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        tmp.clear();
        cin>>scr;
        tmp+=scr[1];
        tmp+=scr[0];
        if(pass==scr||pass==tmp){
            printf("YES\n");
            return 0;
        }
        chk[i]=scr;
    }
    for(i=0;i<n;i++){
        if(chk[i][0]==pass[1]){
            for(int j=0;j<n;j++){
                if(i==j)continue;
                if(chk[j][1]==pass[0]){
                    printf("YES\n");
                    return 0;
                }
            }
        }
        else if(chk[i][1]==pass[0]){
            for(int j=0;j<n;j++){
                if(i==j)continue;
                if(chk[j][0]==pass[1]){
                    printf("YES\n");
                    return 0;
                }
            }
        }
    }
    printf("NO\n");
    return 0;
}
