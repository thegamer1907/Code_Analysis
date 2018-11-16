#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    a--;
    b--;
    vector<int> pow_k(1);
    pow_k[0] = 1;
    while(2*pow_k[pow_k.size()-1]<n)pow_k.push_back(2*pow_k[pow_k.size()-1]);
    for(int i = pow_k.size()-1; i>=0; i--){
        if(a/pow_k[i]!=b/pow_k[i]){
            //cout << a/pow_k[i] << ' ' << b/pow_k[i] << endl;
            if(i!=pow_k.size()-1)cout << i+1;
            else cout << "Final!";
            return 0;
        }
    }

    return 0;
}
