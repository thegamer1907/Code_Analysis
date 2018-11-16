#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, k;
    cin >> n >> k;

    int a[n];

    int c = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);

    for(int i = 0; i < n; i++){
        if(a[i] >= a[n-k] && a[i] > 0){
            c++;
        }
    }
    cout << c <<"\n";
}
