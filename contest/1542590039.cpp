#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

const int maxn = 105;

int main(){
    string pa, s[maxn];
    int n;
    while(cin>>pa){
        scanf("%d", &n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        bool f1 = false, f2 = false;
        for(int i=0;i<n;i++){
            if(pa == s[i]){
                f1 = true;
                f2 = true;
            }
            if(pa[0] == s[i][1]){
                f1 = true;
            }
            if(pa[1] == s[i][0]){
                f2 = true;
            }
        }
        printf("%s\n", f1&&f2 ? "YES": "NO");
    }
    return 0;
}