#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define fx first
#define sx second
using namespace std;

int numeri[1000][11];
ll n;

int main(){

    int k;
    cin >> k;

    for (int i = 0; i<10; i++){
        numeri[1][i] = 1;
    }
    numeri[1][10] = 0;

    int j = 1;

    while(numeri[j][10]<k){
        j++;
        int sum = 0;

        for (int i = 0; i<11; i++){
            sum += numeri[j-1][i];
            numeri[j][i] = sum;
        }

        numeri[j][10] -= numeri[j][0];
    }

    //cout << "j = " << j << endl;

    int fatti = 0;
    int rim = 10;
    int tot = 0;
    while (j>1){
        for(int i = 0; i<=rim; i++){
            if (fatti+numeri[j-1][rim-i]<k){
                fatti += numeri[j-1][rim-i];
            } else {

                tot += (i*ceil(pow(10, j-1)));
                rim -= i;
                //cout << "j = " << j << "   i = " << i << "  rim = " << rim << "  tot = " << tot << endl;
                break;
            }
        }
        j--;
    }

    tot += rim;

    cout << tot;

    return 0;
}
