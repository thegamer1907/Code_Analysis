#include <iostream>

#define int long long

using namespace std;

const int MAXN = 30100;

int n, t, celula = 1, a[MAXN];

main(){

    cin >> n >> t;

    for(int i = 1; i <= (n-1); i++){

        cin >> a[i];

    }

    if(t == celula){

        cout << "YES\n";

        return 0;

    }

    int i = 1;
    while(i <= (n-1)){

        celula = i+ a[i];

        i = celula;

        if(t == celula){

            cout << "YES\n";

            return 0;

        }

    }

    cout << "No\n";

    return 0;

}
