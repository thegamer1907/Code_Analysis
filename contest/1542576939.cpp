#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, k;
    cin >> n >> k;
    //bool ar[n][k];
    map<vector<int>,int > mp;
    for(int i =0; i <n; i++){
        vector<int> v(k);
        for(int j =0; j <  k; j++){
            cin >> v[j];
        }
        mp[v]++;
    }
    for(auto i : mp){
        for(auto j : mp){
            bool valid = 1;
            for(int r = 0; r < k; r++){
                if((i.first)[r] && (j.first)[r])
                    valid = 0;
            }
            if(valid){
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
}
