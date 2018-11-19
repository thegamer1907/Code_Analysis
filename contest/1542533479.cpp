#include <bits/stdc++.h>

using namespace std;

int n;
int b,B;

int main(){

    string A;
    cin >> A;

    cin >> n;

    for (int i = 0 ; i < n ; i++){
        string a;
        cin >> a;
        if ((a[0] == A[0] and A[1] == a[1]) or (A[0] == a[1] and A[1] == a[0])){
            cout << "YES\n";
            return 0;
        }

        if (A[1] == a[0])
            b++;
        if (A[0] == a[1])
        B++;
    }

    if (b != 0 and B!=0)
        cout << "YES\n";
    else
        cout << "NO\n";




return 0;

}
