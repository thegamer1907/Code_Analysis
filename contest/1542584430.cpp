#include <iostream>
#include <algorithm>
using namespace std;
int a[6], h1,h2,cad1[6],cad2[6],k1,k;
int main()
{
    cin >> a[1] >> a[2] >> a[3];
    cin >> h1 >> h2;

    a[1] *= 5;

    if(a[1] == 60){
        a[1] = 0;
    }

    sort(a, a + 4);
    h1 *= 5;
    h2 *= 5;

    if(h1 == 60){
        h1 = 0;
    }

    if(h2 == 60){
        h2 = 0;
    }

    if(h1 <= a[1] || h1 > a[3]){
        cad1[++k] = 1;
    }

    if(h1 > a[1] && h1 <= a[2]){
        cad1[++k] = 2;
    }

    if(h1 > a[2] && h1 <= a[3]){
        cad1[++k] = 3;
    }

    if(h2 <= a[1] || h2 > a[3]){
        cad2[++k1] = 1;
    }

    if(h2 > a[1] && h2 <= a[2]){
        cad2[++k1] = 2;
    }

    if(h2 > a[2] && h2 <= a[3]){
        cad2[++k1] = 3;
    }

    for(int i = 1; i <= k; i++){
        for(int j = 1; j <= k1; j++){
            if(cad1[i] == cad2[j]){
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";

    return 0;
}
