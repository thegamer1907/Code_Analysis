#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string a,b,c;
    vector<char>v1,v2;
    cin >> a >> n;
    int mama = 10;
    while(n--){
        cin >> b;
        v1.push_back(b[0]);
        v2.push_back(b[1]);
        if(b == a)mama = 13;
    }
    if(mama == 13){
        cout << "YES\n" ;
        return 0;
    }
    int size = v1.size();
    int kaka = 6, dada = 6;
    for(int i = 0; i < size;i++){
        if(v1[i] == a[1]){
            kaka = 12;
        }
        if(v2[i] == a[0]){
            dada = 12;
        }
    }
    if(dada == 12 && kaka == 12){
        cout << "YES\n";
        return 0;
    }
    cout << "NO\n";
    return 0;
}
