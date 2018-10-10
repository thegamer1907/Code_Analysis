#include <bits/stdc++.h>
using namespace std;

vector<int> res;

int getD(int x){
    int sum = 0;
    while(x > 0){
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
//    for(int i = 0; i <= 9; i++){
//        for(int j = 0; j <= 10 - i && j < 10; j++){
//            for(int k = 0; k <= 10 - i - j && k < 10; k++){
//                for(int t = 0; t <= 10 - i - j- t && t < 10; t++){
//                    for(int l = 0; l <= 10 - i - j - t - k && l < 10; l++){
//                        for(int e = 0; e <= 10 - i - j - t - k - l && e < 10; e++){
//                            for(int u = 0; u <= 10 - i - j - t -k-l-e && u < 10; u++){
//                                int g = 10 - i - j - t - k - l - e - u;
//                                if(g != 10 ){
//                                    res.push_back(u * 10000000 + i * 1000000 + j * 100000 + k * 10000 + t * 1000 + l * 100 + e * 10 + g);
//                                }
//                            }
//
//                        }
//                    }
//                }
//            }
//        }
//    }
    for(int i = 0; i < 12000000; i++){
        if(getD(i) == 10) res.push_back(i);
    }
    //cout << res.size();
    sort(res.begin(), res.end());
    int k;
    cin >> k;
    cout << res[k-1];
}