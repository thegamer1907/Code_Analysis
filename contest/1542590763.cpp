#include <bits/stdc++.h>
using namespace std;

int main()
{
    char pass[3];
    int n,i,l,c=0;
    char str[102][3];
    cin >> pass;
    scanf(" %d",&n);
    for(i=0;i<n;i++){
        cin >> str[i];
    }
    for(i=0;i<n;i++){
        if(strcmp(pass,str[i])==0){
            printf("YES\n");
            return 0;
        }
    }
    for(i=0;i<n;i++){
        if(pass[0]==str[i][1]){
            c++;
            break;
        }
    }
    for(i=0;i<n;i++){
        if(pass[1]==str[i][0]){
            c++;
            break;
        }
    }
    if(c==2){
        printf("YES\n");
        return 0;
    }
    else{
        printf("NO\n");
        return 0;
    }
    return 0;
}

