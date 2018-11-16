#include<bits/stdc++.h>
 
using namespace std;
map<int,int> mm;
int main(){
    int n,m;
    cin >>n>>m;
    int a[n+1];
    int b[n+2];
    memset(b,0,sizeof(b));
    int l;
    for(int i = 1; i <= n; i++) cin >>a[i];
    for(int i = n; i >= 1; i--) {
        b[i] = b[i+1];
        if(mm[a[i]] == 0) {
            b[i]++;
            mm[a[i]] = 1;
        }
    }
    for(int i = 1; i <= m; i++){
        cin >>l;
        cout <<b[l] <<endl;
    }
}