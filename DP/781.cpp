#include <bits/stdc++.h>

using namespace std;


bool a[105];
int b[105];
int sum = 0;

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> a[i];

        sum += a[i];

        if(a[i] == 1){
            b[i] = -1;
        }else{
            b[i] = 1;
        }
    }


    int maxEndingHere = 0, maxSoFar = -1;

    for(int i = 0; i < n; ++i){

        if(maxEndingHere < 0){
            maxEndingHere = 0;
        }

        maxEndingHere += b[i];

        if(maxSoFar < maxEndingHere){
            maxSoFar = maxEndingHere;
        }
    }

    cout << (sum + maxSoFar) << "\n";
    return 0;
}
