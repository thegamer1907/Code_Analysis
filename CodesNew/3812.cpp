#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long sum = 0, maxi = 0;
    for (int i = 0; i < n; i ++){
        long long a;
        cin >> a;
        sum += a;
        if (a > maxi){
            maxi = a;
        }
    }
    cout << max(maxi, ((sum + n - 2) / (n - 1))) << endl;
}
