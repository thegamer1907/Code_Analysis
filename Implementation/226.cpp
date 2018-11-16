#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;
int n,a,b,i,j;
int main(){
    //freopen("input.txt", "r", stdin);
    cin >> n >> a >> b;
    if(a > b)
        swap(a, b);
    a--; b--;
    for(i = 1; (1 << i) < n; i++){
        for(j = 0; j < n; j += 1 << i){
            if(j <= a && b <= j + (1 << i) - 1){
                cout << i;
                return 0;
            }
        }
    }
    cout << "Final!";
    return 0;
}
