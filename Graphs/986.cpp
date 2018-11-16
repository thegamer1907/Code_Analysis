#include <bits/stdc++.h>

using namespace std;

const int mxn = 30 * 1000 + 10;;

int a[ mxn ];

int n, t;

int main()
{
    //ifstream cin("date.in");
    cin>> n >> t;
    for(int i = 1; i <= n ; i++){
        cin>> a[ i ];
    }
    int k = 1;
    for(k; k < t; k += a[ k ]);
    if(k == t)
        cout<< "YES";
    else
        cout<< "NO";
    return 0;
}
