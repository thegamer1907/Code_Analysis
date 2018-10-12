#include "bits/stdc++.h"
using namespace std;

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    set<string> s1,s2,s3;
    for(int i  = 0;i<m;i++){
        string str1[m];
        cin >> str1[i];
        s1.insert(str1[i]);
        s3.insert(str1[i]);
    }
    for(int i  = 0;i<n;i++){
        string str2[n];
        cin >> str2[i];
        s2.insert(str2[i]);
        s3.insert(str2[i]);
    }
    int k = s1.size() + s2.size() - s3.size();
    if(k%2==0){
        if(m-k>n-k){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }else{
        if(m-k>=n-k){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}

