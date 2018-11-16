#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
    int n; 
    cin >> n;
    vector<int> v1(n, 0);
    vector<int> v2(n, 0);
    for(int i=0;i<n;++i){
        cin >> v1[i];
        if(v1[i] == 0) v2[i] = 1;
        else v2[i] = -1;
    }
    
    int cur = 0;
    int res = v2[0]; // check this
    
    for(int i=0;i<n;++i){
        if(cur < 0){
            cur = v2[i];
        }else{
            cur += v2[i];
            if(cur > res){
                res = max(res, cur);
            }
        }
    }
    
    if(res<=0){
        cout << n - 1 << endl;
    }else{
        //cout << start << end << endl;
        res += accumulate(v1.begin(), v1.end(), 0);
        cout << res << endl;
    }
    
    return 0;
}