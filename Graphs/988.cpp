#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin >> n >> t;
    vector<int> v(n);
    for(int i = 1; i < (n); i++) cin >> v[i];
    int pos = 1;
    while(1){
        if(pos == t){
            puts("YES");
            exit(0);
        }
        if(pos==n)break;
        pos = pos + v[pos];
    }
    puts("NO");
    return 0;
}