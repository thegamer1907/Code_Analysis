#include<bits/stdc++.h>
using namespace std;
long long n, k, sm;
int main(){
    cin >> n >> k;
    while(k%2==0){
        sm++;
        k/=2;
    }
    cout << sm+1;
}
