#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    int n,t;
    cin >> n >> t >> a;
    while(t-- > 0){
        for(int i = 0; i < n; i++){
            if(a.at(i) == 'B' && i + 1 < n && a.at(i+1) == 'G'){
                a[i] = 'G';
                a[i+1] = 'B';
                i++;
            }
        }
    }
    cout << a;
}