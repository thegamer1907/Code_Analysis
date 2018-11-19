//Bismillah hirrahmanir rahim.//
#include<bits/stdc++.h>
using namespace std;
#define check(n,pos) (n& (1<<pos))
#define SET(n,pos) (n(1<<pos))

int main()
{
    string s,p,temp[1111];
    cin >> s;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> temp[i];
    }
    for(int i=0; i<n; i++){
        string need = temp[i];
        for(int j=0; j<n; j++){
            need += temp[j];
            if(need.find(s)!=-1){
                cout << "YES\n";
                return 0;
            }
            need = temp[i];
        }
    }
    cout << "NO\n";
    return 0;
}