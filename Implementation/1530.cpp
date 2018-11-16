#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

int main()
{
    string str;
    cin >> str;

    int serial[101];
    for(int i=0; i<101; i++) serial[i]=0;

    serial[0] = 1; int k=0;
    for(int i=1; i<str.size(); i++){
        if(str[i]==str[i-1]);
        else k++;
        serial[k]++;
        }

    cout << endl;

    for(int i=0; i<=k; i++){
        // cout << serial[i] << " . " ;
        if(serial[i]>=7){
            cout << "YES" << endl;
            return 0;;
        }
    }

    cout << "NO" << endl;
    return 0;
}
