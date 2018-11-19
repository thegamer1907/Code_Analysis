#include <bits/stdc++.h>
#define readFile freopen("in.txt","r",stdin)
#define writeFile freopen("qqq.txt","w",stdout)
#define fastIO ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
 
using namespace std;
 
const int N = 100010;

int n,k;
int a[N][10];

int main() {
#ifndef ONLINE_JUDGE
    readFile;
#endif 
    fastIO;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++) cin >> a[i][j];
    }
    if(k==1){
        for(int i = 0; i < n; i++){
            if(!a[i][0]){
                puts("YES");
                return 0;
            }
        }
        puts("NO");
    }
    else if(k==2){
        bool q = 0;
        for(int i = 0; i < n; i++){
            if(!a[i][0]){
                q = 1;
                break;
            }
        }
        if(!q){
            puts("NO");
            return 0;
        }
        for(int i = 0; i < n; i++){
            if(!a[i][1]){
                puts("YES");
                return 0;
            }
        }
        puts("NO");
    }
    else if(k==3){
        bool q = 0;
        for(int i = 0; i < n; i++){
            if(!a[i][0]){
                q = 1;
                break;
            }
        }
        for(int i = 0; i < n; i++){
            if(!a[i][1] && !a[i][2] && q){
                puts("YES");
                return 0;
            }
        }
        q = 0;
        for(int i = 0; i < n; i++){
            if(!a[i][0] && !a[i][1]){
                q = 1;
                break;
            }
        }
        for(int i = 0; i < n; i++){
            if(!a[i][2] && q){
                puts("YES");
                return 0;
            }
        }
        q = 0;
        for(int i = 0; i < n; i++){
            if(!a[i][0] && !a[i][2]){
                q = 1;
                break;
            }
        }
        for(int i = 0; i < n; i++){
            if(!a[i][1] && q){
                puts("YES");
                return 0;
            }
        }
        puts("NO");
    }
    else{
        bool q = 0;
        for(int i = 0; i < n; i++){
            if(!a[i][0]){
                q = 1;
                break;
            }
        }
        for(int i = 0; i < n; i++){
            if(!a[i][1] && !a[i][2] && !a[i][3] && q){
                puts("YES");
                return 0;
            }
        }
        
        q = 0;
        for(int i = 0; i < n; i++){
            if(!a[i][1]){
                q = 1;
                break;
            }
        }
        for(int i = 0; i < n; i++){
            if(!a[i][0] && !a[i][2] && !a[i][3] && q){
                puts("YES");
                return 0;
            }
        }
        
        q = 0;
        for(int i = 0; i < n; i++){
            if(!a[i][2]){
                q = 1;
                break;
            }
        }
        for(int i = 0; i < n; i++){
            if(!a[i][0] && !a[i][1] && !a[i][3] && q){
                puts("YES");
                return 0;
            }
        }
        
        q = 0;
        for(int i = 0; i < n; i++){
            if(!a[i][3]){
                q = 1;
                break;
            }
        }
        for(int i = 0; i < n; i++){
            if(!a[i][0] && !a[i][2] && !a[i][1] && q){
                puts("YES");
                return 0;
            }
        }
        
        q = 0;
        for(int i = 0; i < n; i++){
            if(!a[i][0] && !a[i][1]){
                q = 1;
                break;
            }
        }
        for(int i = 0; i < n; i++){
            if(!a[i][2] && !a[i][3] && q){
                puts("YES");
                return 0;
            }
        }
        
        q = 0;
        for(int i = 0; i < n; i++){
            if(!a[i][0] && !a[i][2]){
                q = 1;
                break;
            }
        }
        for(int i = 0; i < n; i++){
            if(!a[i][1] && !a[i][3] && q){
                puts("YES");
                return 0;
            }
        }
        
        q = 0;
        for(int i = 0; i < n; i++){
            if(!a[i][0] && !a[i][3]){
                q = 1;
                break;
            }
        }
        for(int i = 0; i < n; i++){
            if(!a[i][1] && !a[i][2] && q){
                puts("YES");
                return 0;
            }
        }
        puts("NO");
    }
    return 0;
}  